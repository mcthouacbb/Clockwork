#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(294, 317);
inline const PParam KNIGHT_MAT = S(1125, 937);
inline const PParam BISHOP_MAT = S(1219, 958);
inline const PParam ROOK_MAT   = S(1675, 1696);
inline const PParam QUEEN_MAT  = S(3648, 2859);
inline const PParam TEMPO_VAL  = S(58, 16);

inline const PParam BISHOP_PAIR_VAL   = S(76, 189);
inline const PParam ROOK_OPEN_VAL     = S(109, -28);
inline const PParam ROOK_SEMIOPEN_VAL = S(39, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-36, -78);

inline const PParam OUTPOST_KNIGHT_VAL = S(8, 52);
inline const PParam OUTPOST_BISHOP_VAL    = S(43, 44);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(53, 17);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(54, -15);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(33, 34);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(55, -49);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(19, 19), S(62, 31), S(74, 70), S(190, 141), S(570, 238), S(778, 1143),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(62, 43), S(62, 31), S(68, 58), S(144, 122), S(678, -85),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-66, -109), S(-54, -91), S(-28, -15), S(26, 64), S(45, 205), S(297, 305),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(50, -44), S(36, -5), S(18, 28), S(18, 78), S(88, 154), S(131, 303),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(17, -46), S(5, 2), S(1, -26), S(7, -45), S(6, -96), S(-187, -144),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(7, 103), S(-26, 91), S(-17, 39), S(-2, 9), S(6, 15), S(36, 13), S(17, 0),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-180, -48), S(31, 0), S(-13, 50), S(11, 80), S(17, 105), S(36, 105), S(-13, 126),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-210, -231), S(-102, -67), S(-46, -15), S(-4, 16), S(39, 29), S(64, 64), S(99, 57), S(130, 57), S(172, 0),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-236, -286), S(-161, -99), S(-85, -37), S(-48, 12), S(-16, 42), S(1, 62), S(20, 76), S(40, 81), S(59, 85), S(73, 80), S(98, 67), S(159, 22), S(194, 3), S(250, -31),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-277, -244), S(-134, -86), S(-84, -22), S(-53, -13), S(-25, 7), S(-11, 29), S(6, 41), S(24, 47), S(41, 59), S(59, 68), S(76, 70), S(90, 72), S(111, 75), S(120, 62), S(261, -62),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-1042, -907), S(-250, -591), S(-157, -451), S(-102, -254), S(-94, -46), S(-56, 61), S(-50, 168), S(-25, 179), S(-19, 232), S(-7, 256), S(3, 277), S(9, 289), S(28, 281), S(40, 290), S(48, 282), S(62, 277), S(68, 266), S(70, 268), S(99, 218), S(121, 179), S(136, 156), S(186, 83), S(197, 72), S(356, -106), S(387, -151), S(640, -321), S(473, -248), S(595, -309),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(420, 53), S(128, -131), S(8, -33), S(-10, 7), S(-42, 11), S(-79, 18), S(-55, 18), S(-65, 12), S(-63, -36),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(87, -23), S(134, -68),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(73, -6), S(149, -43),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(86, -43), S(130, -64), S(183, -64), S(302, -134),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(31, 29), S(92, 42), S(244, -10), S(484, -94), S(730, -219),
};
inline const std::array<PParam, 4> SAFE_CHECK = {
    S(-216, 50), S(-60, -32), S(-175, 36), S(-128, 6),
};

inline const PParam PAWN_THREAT_KNIGHT = S(232, 62);
inline const PParam PAWN_THREAT_BISHOP = S(203, 100);
inline const PParam PAWN_THREAT_ROOK   = S(197, 56);
inline const PParam PAWN_THREAT_QUEEN  = S(171, -66);

inline const PParam KNIGHT_THREAT_BISHOP = S(103, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(234, 5);
inline const PParam KNIGHT_THREAT_QUEEN  = S(150, -76);

inline const PParam BISHOP_THREAT_KNIGHT = S(109, 36);
inline const PParam BISHOP_THREAT_ROOK   = S(241, 57);
inline const PParam BISHOP_THREAT_QUEEN  = S(192, 40);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -7), S(-1, 0), S(0, -10), S(-6, -21), S(-11, -26), S(-17, -33), S(-17, -40), S(-23, -38), S(-33, -43),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(119, 158),    S(102, 209),    S(168, 174),    S(238, 53),     S(182, 51),     S(164, 116),    S(65, 138),     S(127, 114),    //
    S(80, 41),      S(188, 70),     S(166, 12),     S(165, -44),    S(119, -61),    S(63, -12),     S(22, 36),      S(-26, 38),     //
    S(-4, 9),       S(12, 13),      S(29, -30),     S(20, -45),     S(-2, -48),     S(-45, -41),    S(-86, 6),      S(-111, 27),    //
    S(-30, -38),    S(-12, -9),     S(-12, -44),    S(-37, -38),    S(-59, -49),    S(-85, -40),    S(-137, 9),     S(-155, -2),    //
    S(-33, -67),    S(35, -65),     S(-15, -20),    S(-43, -20),    S(-70, -27),    S(-111, -29),   S(-132, -15),   S(-156, -21),   //
    S(-24, -61),    S(116, -59),    S(77, -24),     S(11, -3),      S(-28, -15),    S(-67, -20),    S(-96, 3),      S(-134, -9),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-398, -180),  S(-339, 41),    S(-449, 223),   S(-110, 53),    S(-251, 82),    S(-331, 85),    S(-565, 67),    S(-552, -32),   //
    S(8, -19),      S(71, -2),      S(182, -62),    S(149, -2),     S(143, 7),      S(57, -10),     S(0, 0),        S(-24, -47),    //
    S(76, -47),     S(126, 4),      S(219, 4),      S(162, 29),     S(155, 21),     S(91, 26),      S(58, -1),      S(-37, -2),     //
    S(130, -16),    S(115, 17),     S(165, 22),     S(134, 53),     S(168, 29),     S(106, 36),     S(69, -12),     S(44, -12),     //
    S(96, -24),     S(152, -33),    S(126, 11),     S(127, 16),     S(98, 35),      S(86, 28),      S(66, -9),      S(25, -61),     //
    S(1, -32),      S(38, -37),     S(30, -9),      S(44, 34),      S(48, 31),      S(-14, 9),      S(-10, -36),    S(-52, -49),    //
    S(-1, -22),     S(31, -49),     S(17, -40),     S(10, -19),     S(-2, -23),     S(-35, -42),    S(-24, -61),    S(-84, -130),   //
    S(-49, -71),    S(-10, -30),    S(8, -51),      S(18, -44),     S(8, -36),      S(-37, -67),    S(-54, -39),    S(-102, -95),   //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-163, 69),    S(-183, 52),    S(-423, 78),    S(-291, 87),    S(-251, 93),    S(-415, 116),   S(-168, 98),    S(-119, 70),    //
    S(1, -36),      S(-10, 38),     S(6, 21),       S(-22, 29),     S(-31, 38),     S(-5, 33),      S(-25, 22),     S(-66, 26),     //
    S(26, 21),      S(98, 2),       S(153, 21),     S(82, 18),      S(48, 23),      S(37, 32),      S(94, 4),       S(-11, 20),     //
    S(59, -32),     S(64, 3),       S(101, 8),      S(96, 32),      S(108, 31),     S(35, 33),      S(32, 6),       S(-13, 10),     //
    S(55, -55),     S(68, -21),     S(71, -1),      S(73, 22),      S(61, 39),      S(30, 25),      S(1, -7),       S(1, -52),      //
    S(74, -50),     S(119, -29),    S(119, -16),    S(64, 26),      S(41, 31),      S(35, 26),      S(73, -17),     S(27, -43),     //
    S(57, -86),     S(110, -62),    S(87, -52),     S(46, -17),     S(36, -34),     S(38, -45),     S(16, -30),     S(42, -95),     //
    S(51, -65),     S(36, -18),     S(40, -12),     S(54, -47),     S(59, -59),     S(56, -17),     S(47, -44),     S(29, -45),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(118, 21),     S(180, 22),     S(120, 48),     S(126, 40),     S(136, 29),     S(81, 43),      S(86, 49),      S(87, 55),      //
    S(21, 81),      S(118, 55),     S(206, 28),     S(124, 75),     S(138, 63),     S(81, 73),      S(16, 92),      S(1, 99),       //
    S(18, 54),      S(169, 14),     S(213, 5),      S(203, 5),      S(157, 16),     S(80, 56),      S(95, 43),      S(-29, 93),     //
    S(-18, 50),     S(69, 41),      S(91, 38),      S(119, 0),      S(83, 24),      S(19, 73),      S(3, 70),       S(-69, 77),     //
    S(-87, 1),      S(3, 5),        S(-17, 26),     S(-39, 28),     S(-40, 22),     S(-60, 62),     S(-84, 57),     S(-109, 47),    //
    S(-111, -23),   S(-25, -47),    S(-39, -14),    S(-54, -16),    S(-43, -34),    S(-93, 18),     S(-91, 0),      S(-118, -4),    //
    S(-170, -16),   S(-54, -74),    S(-30, -61),    S(-33, -56),    S(-42, -53),    S(-65, -35),    S(-86, -58),    S(-122, -43),   //
    S(-134, -15),   S(-98, -9),     S(-43, -43),    S(-17, -61),    S(-36, -46),    S(-52, -35),    S(-68, -44),    S(-86, -29),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(31, 48),      S(77, 19),      S(94, 28),      S(-19, 156),    S(45, 82),      S(-9, 101),     S(46, 11),      S(-25, 37),     //
    S(14, 87),      S(-44, 180),    S(-20, 235),    S(-87, 261),    S(-55, 205),    S(-95, 211),    S(-72, 120),    S(-54, 67),     //
    S(-1, 111),     S(85, 123),     S(49, 197),     S(39, 203),     S(0, 185),      S(-43, 190),    S(6, 85),       S(-33, 54),     //
    S(53, 47),      S(69, 109),     S(39, 149),     S(28, 214),     S(-3, 205),     S(-13, 137),    S(20, 49),      S(1, 10),       //
    S(6, 75),       S(54, 28),      S(20, 111),     S(-12, 165),    S(-27, 148),    S(-26, 103),    S(-18, 25),     S(-17, -18),    //
    S(14, -92),     S(47, -47),     S(39, 23),      S(-7, 54),      S(-2, 7),       S(-3, 1),       S(11, -68),     S(-16, -53),    //
    S(-6, -200),    S(36, -296),    S(27, -164),    S(37, -91),     S(8, -75),      S(25, -150),    S(-3, -93),     S(-18, -89),    //
    S(-60, -127),   S(3, -366),     S(-2, -350),    S(25, -256),    S(24, -182),    S(29, -235),    S(16, -199),    S(-36, -131),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-35, -397),   S(101, -18),    S(-50, 32),     S(-171, 58),    S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(199, -110),   S(8, 146),      S(18, 132),     S(118, 63),     S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(-31, 59),     S(79, 135),     S(117, 103),    S(98, 58),      S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(-253, 84),    S(33, 97),      S(29, 93),      S(-23, 76),     S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(-232, 43),    S(-47, 70),     S(-32, 74),     S(-116, 109),   S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(-127, 9),     S(50, 14),      S(-44, 65),     S(-94, 90),     S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(86, -79),     S(130, -39),    S(35, 8),       S(-52, 53),     S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
    S(-34, -109),   S(89, -97),     S(-13, -62),    S(-33, -59),    S(20, -11),     S(20, -11),     S(20, -11),     S(20, -11),     //
};
// clang-format on
}  // namespace Clockwork
