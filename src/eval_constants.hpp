#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(285, 370);
inline const PParam KNIGHT_MAT = S(1030, 1157);
inline const PParam BISHOP_MAT = S(1143, 1219);
inline const PParam ROOK_MAT   = S(1466, 2175);
inline const PParam QUEEN_MAT  = S(2991, 4009);
inline const PParam TEMPO_VAL  = S(96, 86);

inline const PParam BISHOP_PAIR_VAL  = S(64, 217);
inline const PParam ROOK_OPEN_VAL  = S(112, 9);
inline const PParam ROOK_SEMIOPEN_VAL  = S(40, 29);

inline const PParam DOUBLED_PAWN_VAL = S(-24, -91);

inline const PParam OUTPOST_KNIGHT_VAL = S(21, 73);
inline const PParam OUTPOST_BISHOP_VAL = S(50, 39);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(59, 37);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(66, -19);
inline const PParam PAWN_PUSH_THREAT_ROOK = S(55, 37);
inline const PParam PAWN_PUSH_THREAT_QUEEN = S(64, -43);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(21, 16), S(61, 46), S(71, 89), S(160, 220), S(550, 363), S(364, 682),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(70, 60), S(58, 53), S(63, 91), S(83, 195), S(601, 140),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-71, -154), S(-46, -125), S(-30, -13), S(40, 116), S(-40, 395), S(146, 464),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(64, -55), S(58, -35), S(42, 5), S(-13, 73), S(-12, 237), S(-249, 696),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(4, -50), S(30, -2), S(20, -42), S(31, -77), S(92, -270), S(-55, -337),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-35, 142), S(-68, 116), S(-35, 50), S(-7, 20), S(5, 25), S(65, 21), S(20, 14),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-205, -73), S(14, -12), S(-27, 71), S(2, 109), S(5, 144), S(20, 166), S(-41, 179),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-220, -195), S(-108, -31), S(-57, 61), S(-23, 97), S(7, 124), S(33, 160), S(57, 162), S(85, 173), S(107, 145),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-223, -88), S(-148, -39), S(-103, 17), S(-75, 71), S(-43, 99), S(-23, 128), S(-10, 146), S(4, 152), S(12, 160), S(29, 158), S(55, 141), S(84, 130), S(100, 130), S(122, 109),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-61, -519), S(-105, -31), S(-63, 32), S(-53, 73), S(-37, 93), S(-28, 116), S(-25, 144), S(-10, 160), S(-7, 179), S(5, 186), S(17, 195), S(20, 208), S(24, 216), S(42, 204), S(38, 189),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-1049, -911), S(-454, -693), S(-190, -265), S(-108, 33), S(-83, 179), S(-65, 194), S(-55, 261), S(-44, 319), S(-32, 353), S(-17, 360), S(-5, 374), S(6, 379), S(10, 396), S(23, 396), S(22, 402), S(41, 389), S(40, 400), S(42, 401), S(53, 384), S(91, 343), S(119, 313), S(170, 238), S(204, 236), S(332, 87), S(246, 171), S(727, -215), S(501, -109), S(428, -154),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(187, 133), S(71, -157), S(-7, -43), S(-13, 8), S(-47, 11), S(-50, 8), S(-53, 30), S(-58, 20), S(-5, -34),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(51, -10), S(95, -67),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(65, 4), S(152, -36),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(91, -50), S(162, -81), S(243, -68), S(274, -107),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(21, 29), S(78, 42), S(202, 19), S(429, -64), S(678, -125),
};
inline const std::array<PParam, 4> SAFE_CHECK = {
    S(-298, 17), S(-71, -57), S(-221, 10), S(-108, -62),
};

inline const PParam PAWN_THREAT_KNIGHT = S(213, 86);
inline const PParam PAWN_THREAT_BISHOP = S(201, 149);
inline const PParam PAWN_THREAT_ROOK   = S(277, 19);
inline const PParam PAWN_THREAT_QUEEN  = S(262, -124);

inline const PParam KNIGHT_THREAT_BISHOP = S(103, 111);
inline const PParam KNIGHT_THREAT_ROOK   = S(228, 55);
inline const PParam KNIGHT_THREAT_QUEEN  = S(182, -98);

inline const PParam BISHOP_THREAT_KNIGHT = S(79, 81);
inline const PParam BISHOP_THREAT_ROOK   = S(176, 92);
inline const PParam BISHOP_THREAT_QUEEN  = S(226, 175);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(-3, 7), S(0, 1), S(-2, -13), S(-7, -28), S(-10, -40), S(-12, -56), S(-15, -67), S(-16, -82), S(-24, -92),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(-46, 302),    S(31, 247),     S(178, 239),    S(193, 119),    S(210, 79),     S(69, 146),     S(57, 182),     S(23, 232),     //
    S(113, 88),     S(172, 80),     S(246, -32),    S(143, -99),    S(117, -115),   S(92, -63),     S(-4, 50),      S(-23, 58),     //
    S(14, 13),      S(9, 14),       S(38, -46),     S(17, -72),     S(-35, -75),    S(-65, -44),    S(-80, -1),     S(-119, 31),    //
    S(-34, -21),    S(-20, 3),      S(-12, -45),    S(-33, -43),    S(-60, -54),    S(-83, -42),    S(-116, -3),    S(-152, -9),    //
    S(-22, -49),    S(30, -36),     S(-32, -24),    S(-45, -22),    S(-79, -24),    S(-101, -36),   S(-131, -16),   S(-171, -14),   //
    S(0, -40),      S(122, -28),    S(74, -13),     S(-11, 29),     S(-32, -12),    S(-61, -8),     S(-87, 16),     S(-138, 16),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-315, -254),  S(-275, -75),   S(-229, -40),   S(-14, -22),    S(-170, 33),    S(-290, 46),    S(-416, 40),    S(-360, -157),  //
    S(-30, -35),    S(49, 6),       S(84, -5),      S(26, 13),      S(22, 36),      S(-23, 48),     S(-22, 71),     S(-52, 30),     //
    S(82, -23),     S(33, 12),      S(180, 3),      S(86, 69),      S(66, 81),      S(46, 77),      S(28, 30),      S(-9, 32),      //
    S(134, 15),     S(63, 90),      S(146, 75),     S(86, 99),      S(141, 86),     S(96, 85),      S(58, 57),      S(37, 65),      //
    S(59, 33),      S(114, 21),     S(83, 56),      S(88, 92),      S(71, 83),      S(50, 84),      S(62, 31),      S(4, 44),       //
    S(17, 4),       S(45, 9),       S(32, 25),      S(57, 81),      S(27, 83),      S(-5, 46),      S(-24, 19),     S(-51, 3),      //
    S(13, 18),      S(11, 3),       S(8, 4),        S(8, 10),       S(-1, 13),      S(-31, 15),     S(-31, -3),     S(-71, -10),    //
    S(-33, -6),     S(-27, 13),     S(17, -1),      S(4, 33),       S(6, 15),       S(-64, -8),     S(-38, -4),     S(-169, -11),   //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-147, 13),    S(-156, 69),    S(-232, 49),    S(-297, 80),    S(-301, 91),    S(-260, 63),    S(-131, 59),    S(-74, 63),     //
    S(-101, 15),    S(-137, 80),    S(-40, 45),     S(-70, 40),     S(-85, 66),     S(0, 39),       S(2, 45),       S(-25, 26),     //
    S(9, 70),       S(62, 41),      S(85, 68),      S(0, 59),       S(8, 32),       S(11, 56),      S(34, 43),      S(0, 47),       //
    S(-7, 32),      S(51, 24),      S(51, 61),      S(47, 83),      S(60, 98),      S(28, 51),      S(28, 52),      S(-23, 54),     //
    S(71, -19),     S(2, 35),       S(45, 40),      S(38, 79),      S(49, 73),      S(9, 76),       S(-33, 54),     S(-4, 35),      //
    S(71, 0),       S(109, 15),     S(81, 50),      S(64, 77),      S(28, 71),      S(44, 73),      S(67, 58),      S(-16, 20),     //
    S(72, -18),     S(117, -11),    S(85, 2),       S(32, 27),      S(19, 37),      S(60, -12),     S(37, -3),      S(53, 0),       //
    S(115, -67),    S(73, 3),       S(19, 47),      S(54, 21),      S(8, 15),       S(41, 46),      S(79, 41),      S(36, -6),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(12, 87),      S(-83, 144),    S(38, 112),     S(-12, 99),     S(-92, 150),    S(-63, 146),    S(-19, 116),    S(-45, 132),    //
    S(85, 57),      S(84, 100),     S(88, 112),     S(-43, 142),    S(12, 144),     S(-47, 180),    S(-82, 171),    S(-85, 155),    //
    S(47, 47),      S(190, 47),     S(115, 55),     S(66, 82),      S(-10, 110),    S(-21, 135),    S(9, 119),      S(-91, 142),    //
    S(1, 67),       S(35, 83),      S(39, 80),      S(7, 85),       S(-14, 107),    S(-24, 128),    S(-19, 119),    S(-81, 144),    //
    S(-67, 52),     S(16, 52),      S(-76, 79),     S(-62, 77),     S(-73, 89),     S(-90, 102),    S(-107, 105),   S(-123, 108),   //
    S(-23, 2),      S(52, -15),     S(-34, 28),     S(-47, 34),     S(-90, 64),     S(-96, 56),     S(-89, 50),     S(-125, 65),    //
    S(-66, -15),    S(28, -39),     S(-28, -4),     S(-36, 11),     S(-57, 23),     S(-66, 33),     S(-98, 38),     S(-118, 32),    //
    S(-99, -16),    S(-56, 25),     S(-44, 21),     S(-18, -1),     S(-41, 15),     S(-63, 36),     S(-68, 16),     S(-86, 32),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(-78, 49),     S(152, -86),    S(1, 133),      S(-88, 186),    S(-47, 143),    S(-109, 156),   S(-144, 98),    S(-130, 128),   //
    S(80, 68),      S(-63, 151),    S(-40, 248),    S(-175, 329),   S(-119, 258),   S(-62, 170),    S(-51, 88),     S(-34, 70),     //
    S(-9, 106),     S(64, 91),      S(-12, 232),    S(-22, 230),    S(-29, 209),    S(-7, 159),     S(17, 53),      S(9, 49),       //
    S(57, 80),      S(59, 151),     S(28, 163),     S(-12, 209),    S(-21, 221),    S(7, 127),      S(31, 84),      S(5, 61),       //
    S(58, 61),      S(40, 111),     S(10, 134),     S(-15, 196),    S(-37, 212),    S(-25, 150),    S(-20, 114),    S(-10, 54),     //
    S(50, 0),       S(62, 57),      S(36, 83),      S(-13, 136),    S(-25, 115),    S(-14, 118),    S(1, 63),       S(2, 6),        //
    S(34, -117),    S(54, -137),    S(40, -59),     S(19, 29),      S(14, 27),      S(8, 7),        S(5, -6),       S(35, -78),     //
    S(-5, -139),    S(-39, -96),    S(-42, -26),    S(-2, -16),     S(-9, 32),      S(-2, -22),     S(0, -44),      S(-33, -26),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(289, -334),   S(165, -119),   S(83, -62),     S(-63, -12),    S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(-202, 44),    S(17, 128),     S(-28, 152),    S(205, 75),     S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(-138, 60),    S(86, 142),     S(135, 147),    S(-6, 176),     S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(-266, 48),    S(-123, 121),   S(-153, 153),   S(-250, 175),   S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(-307, 9),     S(-136, 56),    S(-120, 88),    S(-261, 141),   S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(-116, -27),   S(29, -2),      S(-50, 47),     S(-97, 83),     S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(87, -99),     S(123, -43),    S(22, 16),      S(-56, 49),     S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
    S(42, -157),    S(86, -111),    S(-13, -41),    S(-14, -49),    S(20, -12),     S(20, -12),     S(20, -12),     S(20, -12),     //
};
// clang-format on
}
