#pragma once

#include "common.hpp"
#include "eval_constants.hpp"
#include "eval_types.hpp"
#include "position.hpp"
#include "square.hpp"
#include "util/static_vector.hpp"

namespace Clockwork {

struct PsqtUpdates {
    struct Update {
        Color     color;
        PieceType pt;
        Square    sq;
    };
    StaticVector<Update, 2> adds;
    StaticVector<Update, 2> removes;
};

struct PsqtState {
public:
    PsqtState() = default;
    PsqtState(const Position& pos) {
        for (Color c : {Color::White, Color::Black}) {
            auto& pieces  = pos.piece_list(c);
            auto& squares = pos.piece_list_sq(c);

            for (size_t i = 0; i < 16; i++) {
                PieceType pt = pieces[i];
                if (pt == PieceType::None) {
                    continue;
                }

                add_piece(c, pt, squares[i]);
            }
        }
    }

    void add_piece(Color color, PieceType pt, Square sq) {
        if (color == Color::White) {
            sq = sq.flip_vertical();
        }
        PScore diff{};
        switch (pt) {
        case PieceType::Pawn:
            diff = PAWN_MAT + PAWN_PSQT[sq.raw - 8];
            break;
        case PieceType::Knight:
            diff = KNIGHT_MAT + KNIGHT_PSQT[sq.raw];
            break;
        case PieceType::Bishop:
            diff = BISHOP_MAT + BISHOP_PSQT[sq.raw];
            break;
        case PieceType::Rook:
            diff = ROOK_MAT + ROOK_PSQT[sq.raw];
            break;
        case PieceType::Queen:
            diff = QUEEN_MAT + QUEEN_PSQT[sq.raw];
            break;
        case PieceType::King:
            diff = KING_PSQT[sq.raw];
            break;
        default:
            unreachable();
            break;
        }
        // TODO: change this to +=/-= after adding this operators
        if (color == Color::White) {
            m_score = m_score + diff;
        } else {
            m_score = m_score - diff;
        }
    }

    void remove_piece(Color color, PieceType pt, Square sq) {
        if (color == Color::White) {
            sq = sq.flip_vertical();
        }
        PScore diff{};
        switch (pt) {
        case PieceType::Pawn:
            diff = PAWN_MAT + PAWN_PSQT[sq.raw - 8];
            break;
        case PieceType::Knight:
            diff = KNIGHT_MAT + KNIGHT_PSQT[sq.raw];
            break;
        case PieceType::Bishop:
            diff = BISHOP_MAT + BISHOP_PSQT[sq.raw];
            break;
        case PieceType::Rook:
            diff = ROOK_MAT + ROOK_PSQT[sq.raw];
            break;
        case PieceType::Queen:
            diff = QUEEN_MAT + QUEEN_PSQT[sq.raw];
            break;
        case PieceType::King:
            diff = KING_PSQT[sq.raw];
            break;
        default:
            unreachable();
            break;
        }
        // TODO: change this to +=/-= after adding this operators
        if (color == Color::White) {
            m_score = m_score - diff;
        } else {
            m_score = m_score + diff;
        }
    }

    void apply_updates(const PsqtUpdates& updates) {
        for (const auto& add : updates.adds) {
            add_piece(add.color, add.pt, add.sq);
        }

        for (const auto& remove : updates.removes) {
            remove_piece(remove.color, remove.pt, remove.sq);
        }
    }

    PScore score() const {
        return m_score;
    }

    bool operator==(const PsqtState& other) const noexcept = default;
    bool operator!=(const PsqtState& other) const noexcept = default;

private:
    PScore m_score = PSCORE_ZERO;
};

}
