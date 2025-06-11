#include "movegen.hpp"
#include "position.hpp"
#include <array>

namespace Clockwork {

bool quiet_move(Move move);

class MovePicker {
public:
    MovePicker(const Position& pos);
    ~MovePicker() = default;

    std::optional<Move> pick_next();

private:
    i32  score_move(Move move) const;
    void score_moves();

    const Position&      m_pos;
    MoveGen              m_movegen;
    MoveList             m_moves;
    std::array<i32, 256> m_scores;
    u32                  m_curr;
};

}
