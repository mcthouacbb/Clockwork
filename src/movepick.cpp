#include "movepick.hpp"

namespace Clockwork {

bool quiet_move(Move move) {
    return !move.is_capture() && (!move.is_promotion() || move.promo().value() != PieceType::Queen);
}

MovePicker::MovePicker(const Position& pos) :
    m_pos{pos},
    m_movegen{pos},
    m_curr{0} {
    m_movegen.generate_moves(m_moves);
    score_moves();
}

std::optional<Move> MovePicker::pick_next() {
    if (m_curr == m_moves.size()) {
        return std::nullopt;
    }

    u32 best_idx = m_curr;
    for (u32 i = m_curr + 1; i < m_moves.size(); i++) {
        if (m_scores[i] > m_scores[best_idx]) {
            best_idx = i;
        }
    }
    std::swap(m_moves[m_curr], m_moves[best_idx]);
    std::swap(m_scores[m_curr], m_scores[best_idx]);
    return m_moves[m_curr++];
}

i32 MovePicker::score_move(Move move) const {
    if (quiet_move(move)) {
        return 0;
    } else {
        return 100 * static_cast<i32>(m_pos.board()[move.to()].ptype())
             - static_cast<i32>(m_pos.board()[move.from()].ptype());
    }
}

void MovePicker::score_moves() {
    for (uint32_t i = 0; i < m_moves.size(); i++) {
        m_scores[i] = score_move(m_moves[i]);
    }
}

}
