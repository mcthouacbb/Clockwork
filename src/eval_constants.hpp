#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(288, 372);
inline const PParam KNIGHT_MAT = S(1024, 1155);
inline const PParam BISHOP_MAT = S(1145, 1224);
inline const PParam ROOK_MAT   = S(1462, 2176);
inline const PParam QUEEN_MAT  = S(2995, 4015);
inline const PParam TEMPO_VAL  = S(96, 85);

inline const PParam BISHOP_PAIR_VAL  = S(66, 212);
inline const PParam ROOK_OPEN_VAL  = S(112, 9);
inline const PParam ROOK_SEMIOPEN_VAL  = S(41, 30);

inline const PParam DOUBLED_PAWN_VAL = S(-25, -90);

inline const PParam OUTPOST_KNIGHT_VAL = S(21, 73);
inline const PParam OUTPOST_BISHOP_VAL = S(51, 40);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(59, 36);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(65, -20);
inline const PParam PAWN_PUSH_THREAT_ROOK = S(57, 36);
inline const PParam PAWN_PUSH_THREAT_QUEEN = S(65, -36);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(21, 15), S(60, 45), S(72, 90), S(159, 222), S(556, 365), S(612, 758),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(68, 59), S(56, 53), S(64, 90), S(85, 193), S(596, 135),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-68, -152), S(-43, -122), S(-29, -8), S(40, 120), S(-36, 398), S(145, 463),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(64, -56), S(60, -33), S(43, 4), S(-10, 71), S(-10, 238), S(-224, 688),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(1, -53), S(27, -2), S(18, -41), S(31, -78), S(94, -270), S(-51, -335),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-32, 141), S(-66, 116), S(-35, 51), S(-9, 22), S(5, 26), S(64, 19), S(23, 14),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-235, -74), S(14, -17), S(-27, 67), S(2, 106), S(3, 141), S(16, 163), S(-49, 176),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-216, -195), S(-105, -33), S(-56, 63), S(-20, 96), S(10, 124), S(36, 161), S(62, 164), S(86, 176), S(106, 147),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-226, -89), S(-149, -43), S(-104, 15), S(-78, 70), S(-44, 97), S(-24, 126), S(-11, 144), S(3, 150), S(11, 157), S(27, 154), S(53, 138), S(84, 125), S(91, 126), S(121, 100),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-110, -453), S(-109, -29), S(-66, 34), S(-56, 76), S(-39, 94), S(-32, 117), S(-28, 145), S(-14, 162), S(-10, 181), S(3, 189), S(14, 197), S(16, 210), S(19, 219), S(35, 207), S(26, 193),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-1018, -900), S(-404, -676), S(-178, -334), S(-115, 43), S(-91, 182), S(-71, 200), S(-64, 268), S(-52, 320), S(-38, 356), S(-23, 361), S(-12, 375), S(0, 379), S(3, 397), S(17, 397), S(17, 404), S(35, 391), S(34, 402), S(37, 400), S(50, 383), S(85, 343), S(114, 312), S(168, 234), S(206, 223), S(327, 80), S(272, 139), S(735, -218), S(487, -102), S(480, -177),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(227, 93), S(75, -161), S(-4, -45), S(-9, 4), S(-44, 8), S(-49, 5), S(-55, 27), S(-59, 17), S(-4, -35),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(51, -11), S(98, -68),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(51, -11), S(145, -44),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(76, -64), S(109, -103), S(159, -81), S(105, -136),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-6, -19), S(23, -62), S(122, -135), S(333, -279), S(608, -433),
};
inline const std::array<PParam, 4> SAFE_CHECK = {
    S(-298, 17), S(-63, -37), S(-199, 8), S(-80, -61),
};

inline const PParam PAWN_THREAT_KNIGHT = S(213, 83);
inline const PParam PAWN_THREAT_BISHOP = S(201, 150);
inline const PParam PAWN_THREAT_ROOK   = S(280, 18);
inline const PParam PAWN_THREAT_QUEEN  = S(264, -125);

inline const PParam KNIGHT_THREAT_BISHOP = S(102, 110);
inline const PParam KNIGHT_THREAT_ROOK   = S(229, 54);
inline const PParam KNIGHT_THREAT_QUEEN  = S(181, -100);

inline const PParam BISHOP_THREAT_KNIGHT = S(79, 80);
inline const PParam BISHOP_THREAT_ROOK   = S(176, 92);
inline const PParam BISHOP_THREAT_QUEEN  = S(226, 175);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(-3, 7), S(0, 0), S(-1, -13), S(-6, -26), S(-10, -39), S(-12, -56), S(-15, -67), S(-17, -83), S(-25, -95),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(-55, 304),    S(39, 246),     S(174, 242),    S(184, 125),    S(205, 80),     S(71, 148),     S(56, 181),     S(11, 234),     //
    S(110, 86),     S(173, 79),     S(240, -35),    S(137, -99),    S(111, -115),   S(85, -66),     S(-7, 49),      S(-24, 57),     //
    S(10, 10),      S(7, 10),       S(36, -48),     S(13, -74),     S(-39, -76),    S(-69, -46),    S(-84, -2),     S(-121, 27),    //
    S(-40, -23),    S(-21, 1),      S(-16, -48),    S(-36, -45),    S(-62, -56),    S(-87, -44),    S(-118, -5),    S(-153, -12),   //
    S(-29, -51),    S(27, -38),     S(-35, -26),    S(-46, -25),    S(-81, -28),    S(-103, -38),   S(-133, -18),   S(-172, -17),   //
    S(-8, -44),     S(120, -31),    S(74, -16),     S(-13, 25),     S(-35, -15),    S(-65, -9),     S(-89, 14),     S(-140, 13),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-313, -255),  S(-281, -71),   S(-233, -38),   S(1, -24),      S(-166, 36),    S(-287, 46),    S(-413, 40),    S(-361, -153),  //
    S(-27, -37),    S(48, 6),       S(81, -5),      S(25, 16),      S(22, 38),      S(-24, 51),     S(-23, 74),     S(-51, 32),     //
    S(85, -21),     S(30, 13),      S(182, 4),      S(89, 70),      S(66, 83),      S(49, 76),      S(27, 29),      S(-10, 33),     //
    S(136, 15),     S(63, 90),      S(147, 74),     S(84, 101),     S(141, 86),     S(96, 86),      S(58, 58),      S(39, 68),      //
    S(56, 31),      S(107, 18),     S(79, 53),      S(88, 90),      S(74, 82),      S(50, 84),      S(60, 33),      S(6, 45),       //
    S(15, 2),       S(42, 4),       S(28, 24),      S(57, 78),      S(28, 81),      S(-4, 46),      S(-26, 21),     S(-51, 6),      //
    S(12, 16),      S(18, 2),       S(10, 3),       S(10, 11),      S(0, 13),       S(-30, 15),     S(-31, -3),     S(-69, -7),     //
    S(-38, -8),     S(-29, 12),     S(10, -3),      S(2, 31),       S(5, 14),       S(-62, -8),     S(-38, -1),     S(-166, -10),   //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-145, 10),    S(-159, 67),    S(-223, 47),    S(-293, 75),    S(-303, 92),    S(-257, 60),    S(-143, 55),    S(-79, 59),     //
    S(-113, 15),    S(-140, 78),    S(-44, 38),     S(-62, 39),     S(-82, 60),     S(-4, 36),      S(-9, 43),      S(-26, 21),     //
    S(17, 66),      S(47, 35),      S(96, 61),      S(0, 59),       S(14, 33),      S(6, 55),       S(32, 40),      S(0, 47),       //
    S(-5, 27),      S(49, 22),      S(50, 58),      S(47, 82),      S(59, 97),      S(34, 49),      S(25, 48),      S(-23, 51),     //
    S(68, -24),     S(0, 33),       S(40, 38),      S(21, 78),      S(49, 73),      S(5, 75),       S(-29, 55),     S(-6, 34),      //
    S(65, -1),      S(101, 10),     S(75, 47),      S(61, 71),      S(21, 68),      S(43, 74),      S(65, 60),      S(-16, 24),     //
    S(65, -21),     S(110, -15),    S(85, -3),      S(29, 26),      S(17, 35),      S(54, -15),     S(34, -2),      S(47, 2),       //
    S(110, -69),    S(65, -2),      S(14, 45),      S(50, 19),      S(6, 11),       S(38, 43),      S(74, 39),      S(35, -6),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(6, 87),       S(-116, 151),   S(-29, 125),    S(-59, 106),    S(-139, 158),   S(-103, 154),   S(-49, 121),    S(-70, 136),    //
    S(52, 64),      S(54, 100),     S(60, 113),     S(-46, 139),    S(12, 141),     S(-47, 176),    S(-83, 166),    S(-84, 152),    //
    S(22, 54),      S(176, 48),     S(126, 53),     S(75, 81),      S(-4, 112),     S(-18, 138),    S(13, 121),     S(-85, 144),    //
    S(-11, 72),     S(19, 86),      S(50, 74),      S(9, 85),       S(-13, 110),    S(-20, 130),    S(-18, 122),    S(-79, 145),    //
    S(-75, 52),     S(2, 53),       S(-70, 79),     S(-53, 76),     S(-67, 87),     S(-83, 102),    S(-105, 105),   S(-120, 105),   //
    S(-27, 0),      S(37, -14),     S(-29, 26),     S(-41, 33),     S(-86, 63),     S(-92, 55),     S(-87, 47),     S(-122, 63),    //
    S(-78, -18),    S(15, -41),     S(-25, -6),     S(-38, 7),      S(-60, 21),     S(-66, 29),     S(-98, 35),     S(-115, 27),    //
    S(-99, -17),    S(-66, 25),     S(-45, 20),     S(-15, -3),     S(-39, 14),     S(-63, 34),     S(-66, 15),     S(-82, 30),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(-75, 34),     S(152, -92),    S(-20, 131),    S(-116, 190),   S(-71, 148),    S(-134, 171),   S(-168, 108),   S(-133, 110),   //
    S(80, 74),      S(-49, 148),    S(-23, 238),    S(-141, 323),   S(-97, 267),    S(-51, 185),    S(-43, 100),    S(-30, 78),     //
    S(-30, 135),    S(57, 112),     S(-16, 235),    S(5, 251),      S(0, 234),      S(-5, 197),     S(14, 84),      S(5, 82),       //
    S(50, 92),      S(56, 165),     S(42, 157),     S(-15, 224),    S(-5, 230),     S(28, 138),     S(33, 112),     S(3, 91),       //
    S(56, 42),      S(43, 116),     S(18, 137),     S(-30, 204),    S(-41, 209),    S(-14, 166),    S(-8, 138),     S(-9, 78),      //
    S(40, -39),     S(53, 34),      S(39, 67),      S(-10, 123),    S(-22, 109),    S(-12, 119),    S(3, 81),       S(10, 22),      //
    S(29, -163),    S(48, -185),    S(42, -93),     S(21, 6),       S(16, 11),      S(10, -9),      S(2, -16),      S(40, -80),     //
    S(-15, -152),   S(-49, -131),   S(-45, -48),    S(0, -29),      S(-9, 38),      S(-2, -15),     S(-1, -40),     S(-36, -28),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(170, -315),   S(131, -120),   S(24, -61),     S(-122, -9),    S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(-218, 41),    S(1, 124),      S(-61, 150),    S(171, 73),     S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(-158, 57),    S(53, 139),     S(89, 147),     S(-56, 174),    S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(-293, 46),    S(-146, 117),   S(-195, 152),   S(-306, 174),   S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(-322, 5),     S(-163, 54),    S(-160, 88),    S(-300, 140),   S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(-116, -32),   S(29, -6),      S(-66, 45),     S(-118, 81),    S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(92, -100),    S(136, -48),    S(19, 11),      S(-62, 46),     S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
    S(56, -168),    S(100, -117),   S(-6, -46),     S(-7, -55),     S(20, -13),     S(20, -13),     S(20, -13),     S(20, -13),     //
};
// clang-format on
}
