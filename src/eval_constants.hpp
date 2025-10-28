#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(305, 322);
inline const PParam KNIGHT_MAT = S(1123, 916);
inline const PParam BISHOP_MAT = S(1232, 962);
inline const PParam ROOK_MAT   = S(1696, 1691);
inline const PParam QUEEN_MAT  = S(3640, 2924);
inline const PParam TEMPO_VAL  = S(59, 15);

inline const PParam BISHOP_PAIR_VAL  = S(80, 177);
inline const PParam ROOK_OPEN_VAL  = S(104, -28);
inline const PParam ROOK_SEMIOPEN_VAL  = S(39, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-37, -78);

inline const PParam OUTPOST_KNIGHT_VAL = S(7, 51);
inline const PParam OUTPOST_BISHOP_VAL = S(43, 44);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(54, 18);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(56, -14);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(34, 33);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(55, -52);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(18, 19), S(61, 32), S(77, 70), S(196, 139), S(574, 243), S(945, 1128),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(61, 44), S(61, 29), S(67, 56), S(145, 122), S(695, -85),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-66, -95), S(-54, -76), S(-29, 0), S(27, 78), S(53, 218), S(289, 313),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(51, -45), S(37, -7), S(17, 28), S(18, 77), S(84, 155), S(145, 298),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(18, -45), S(4, 3), S(0, -24), S(0, -43), S(-5, -94), S(-184, -144),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(9, 93), S(-24, 81), S(-16, 30), S(0, 0), S(8, 5), S(38, 3), S(18, -9),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    CS(0, 0), S(-200, -49), S(35, -5), S(-10, 44), S(13, 74), S(18, 100), S(37, 100), S(-14, 120),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-224, -217), S(-115, -51), S(-57, 1), S(-13, 34), S(33, 48), S(60, 83), S(98, 77), S(133, 76), S(178, 16),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-241, -279), S(-166, -91), S(-88, -30), S(-52, 19), S(-19, 49), S(-1, 68), S(15, 81), S(32, 84), S(48, 86), S(56, 78), S(74, 62), S(131, 8), S(155, -19), S(208, -53),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(-313, -234), S(-152, -75), S(-101, -12), S(-70, -4), S(-42, 17), S(-29, 40), S(-12, 52), S(5, 59), S(22, 72), S(41, 81), S(58, 84), S(72, 86), S(92, 90), S(98, 78), S(237, -47),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-986, -889), S(-256, -631), S(-162, -487), S(-110, -284), S(-101, -78), S(-62, 25), S(-56, 129), S(-31, 139), S(-24, 191), S(-12, 214), S(-1, 234), S(5, 246), S(23, 239), S(35, 248), S(42, 242), S(56, 236), S(62, 226), S(64, 228), S(92, 180), S(115, 139), S(130, 119), S(179, 46), S(188, 36), S(354, -147), S(395, -200), S(631, -359), S(368, -205), S(491, -291),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(471, 7), S(130, -133), S(7, -36), S(-14, 4), S(-46, 7), S(-86, 15), S(-63, 15), S(-73, 10), S(-72, -38),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    CS(0, 0), S(80, -23), S(129, -67),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    CS(0, 0), S(62, -13), S(149, -46),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    CS(0, 0), S(72, -46), S(89, -68), S(126, -62), S(174, -125),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    CS(0, 0), S(-3, 17), S(20, 14), S(143, -50), S(351, -142), S(593, -305),
};
inline const std::array<PParam, 4> SAFE_CHECK = {
    S(-216, 51), S(-60, -17), S(-139, 25), S(-94, 2),
};

inline const PParam PAWN_THREAT_KNIGHT = S(227, 74);
inline const PParam PAWN_THREAT_BISHOP = S(208, 115);
inline const PParam PAWN_THREAT_ROOK   = S(190, 56);
inline const PParam PAWN_THREAT_QUEEN  = S(166, -65);

inline const PParam KNIGHT_THREAT_BISHOP = S(102, 68);
inline const PParam KNIGHT_THREAT_ROOK   = S(235, 1);
inline const PParam KNIGHT_THREAT_QUEEN  = S(148, -79);

inline const PParam BISHOP_THREAT_KNIGHT = S(108, 27);
inline const PParam BISHOP_THREAT_ROOK   = S(238, 53);
inline const PParam BISHOP_THREAT_QUEEN  = S(190, 38);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(-2, -11), S(-5, -2), S(-5, -12), S(-10, -22), S(-15, -27), S(-20, -34), S(-20, -42), S(-25, -42), S(-35, -48),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(109, 161),    S(95, 209),     S(166, 174),    S(236, 54),     S(181, 50),     S(161, 116),    S(56, 140),     S(116, 119),    //
    S(72, 36),      S(187, 62),     S(164, 5),      S(160, -50),    S(114, -67),    S(57, -18),     S(19, 30),      S(-34, 33),     //
    S(-12, 5),      S(9, 9),        S(30, -35),     S(17, -50),     S(-5, -52),     S(-48, -46),    S(-92, 3),      S(-119, 24),    //
    S(-38, -42),    S(-9, -15),     S(-12, -48),    S(-32, -45),    S(-56, -55),    S(-86, -43),    S(-139, 5),     S(-162, -6),    //
    S(-43, -72),    S(33, -70),     S(-14, -24),    S(-42, -23),    S(-70, -28),    S(-113, -31),   S(-135, -18),   S(-164, -25),   //
    S(-36, -66),    S(109, -65),    S(71, -31),     S(6, -10),      S(-34, -22),    S(-74, -25),    S(-104, 0),     S(-143, -13),   //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-378, -173),  S(-332, 46),    S(-429, 226),   S(-100, 57),    S(-232, 85),    S(-316, 87),    S(-550, 72),    S(-525, -29),   //
    S(21, -15),     S(80, 0),       S(188, -60),    S(156, 0),      S(153, 9),      S(64, -7),      S(8, 2),        S(-12, -44),    //
    S(88, -40),     S(138, 20),     S(226, 20),     S(173, 42),     S(166, 34),     S(97, 39),      S(70, 10),      S(-25, 5),      //
    S(135, -3),     S(101, 40),     S(155, 45),     S(127, 75),     S(165, 50),     S(98, 59),      S(58, 11),      S(50, 0),       //
    S(97, -5),      S(144, -15),    S(111, 32),     S(122, 32),     S(95, 53),      S(79, 49),      S(66, 6),       S(31, -43),     //
    S(-1, -31),     S(28, -37),     S(18, -10),     S(35, 33),      S(40, 30),      S(-20, 8),      S(-14, -34),    S(-49, -45),    //
    S(4, -18),      S(43, -51),     S(20, -41),     S(15, -20),     S(0, -25),      S(-33, -42),    S(-17, -57),    S(-75, -127),   //
    S(-39, -68),    S(-1, -28),     S(13, -49),     S(24, -43),     S(16, -34),     S(-28, -65),    S(-45, -34),    S(-89, -87),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-163, 64),    S(-182, 47),    S(-424, 73),    S(-297, 83),    S(-248, 88),    S(-412, 113),   S(-177, 95),    S(-124, 65),    //
    S(-2, -40),     S(-8, 38),      S(6, 19),       S(-14, 23),     S(-32, 36),     S(-4, 30),      S(-27, 20),     S(-70, 20),     //
    S(32, 18),      S(105, 16),     S(175, 33),     S(101, 30),     S(73, 33),      S(53, 44),      S(102, 15),     S(-9, 19),      //
    S(47, -30),     S(45, 35),      S(100, 32),     S(107, 60),     S(117, 57),     S(43, 56),      S(20, 35),      S(-22, 15),     //
    S(44, -50),     S(67, -5),      S(68, 22),      S(70, 47),      S(67, 63),      S(25, 50),      S(4, 13),       S(-3, -47),     //
    S(64, -53),     S(102, -28),    S(108, -13),    S(54, 26),      S(31, 32),      S(27, 30),      S(61, -14),     S(23, -44),     //
    S(48, -88),     S(104, -65),    S(84, -58),     S(43, -22),     S(32, -36),     S(31, -46),     S(13, -31),     S(37, -96),     //
    S(45, -71),     S(31, -26),     S(35, -18),     S(48, -55),     S(54, -65),     S(52, -21),     S(43, -48),     S(26, -48),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(102, 15),     S(153, 19),     S(88, 47),      S(90, 42),      S(98, 32),      S(58, 42),      S(63, 45),      S(71, 49),      //
    S(11, 73),      S(99, 48),      S(180, 24),     S(110, 67),     S(128, 55),     S(72, 65),      S(7, 84),       S(-4, 91),      //
    S(8, 50),       S(163, 6),      S(211, -3),     S(201, 0),      S(153, 12),     S(77, 51),      S(91, 38),      S(-33, 89),     //
    S(-37, 45),     S(41, 33),      S(73, 28),      S(102, -8),     S(67, 17),      S(3, 64),       S(-19, 64),     S(-82, 70),     //
    S(-108, -4),    S(-19, -5),     S(-35, 13),     S(-51, 16),     S(-53, 11),     S(-75, 52),     S(-99, 46),     S(-122, 39),    //
    S(-130, -29),   S(-47, -58),    S(-53, -25),    S(-66, -27),    S(-54, -44),    S(-106, 8),     S(-106, -9),    S(-129, -11),   //
    S(-192, -22),   S(-75, -82),    S(-44, -70),    S(-50, -63),    S(-58, -60),    S(-78, -44),    S(-99, -66),    S(-135, -49),   //
    S(-148, -18),   S(-113, -13),   S(-54, -48),    S(-26, -67),    S(-46, -52),    S(-60, -41),    S(-77, -50),    S(-94, -35),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(26, 33),      S(68, 12),      S(81, 18),      S(-44, 157),    S(29, 79),      S(-25, 104),    S(29, 11),      S(-26, 14),     //
    S(20, 77),      S(-28, 165),    S(0, 208),      S(-65, 241),    S(-35, 192),    S(-82, 204),    S(-58, 109),    S(-45, 55),     //
    S(-1, 110),     S(94, 111),     S(55, 183),     S(69, 188),     S(30, 171),     S(-33, 188),    S(14, 87),      S(-27, 54),     //
    S(37, 52),      S(48, 122),     S(33, 143),     S(21, 215),     S(-3, 200),     S(-10, 135),    S(6, 69),       S(-4, 20),      //
    S(-5, 61),      S(45, 22),      S(11, 102),     S(-24, 157),    S(-36, 139),    S(-30, 105),    S(-17, 32),     S(-21, -9),     //
    S(9, -128),     S(33, -73),     S(34, -1),      S(-11, 32),     S(-4, -9),      S(-4, -7),      S(7, -65),      S(-13, -55),    //
    S(-8, -245),    S(30, -345),    S(27, -201),    S(37, -122),    S(7, -100),     S(25, -171),    S(-5, -106),    S(-16, -102),   //
    S(-60, -159),   S(4, -410),     S(-5, -385),    S(24, -280),    S(26, -195),    S(31, -248),    S(18, -211),    S(-34, -144),   //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-168, -368),  S(68, -15),     S(-86, 36),     S(-216, 64),    S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(186, -111),   S(-1, 146),     S(-5, 134),     S(85, 66),      S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(-57, 61),     S(55, 135),     S(82, 105),     S(63, 60),      S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(-277, 84),    S(9, 97),       S(-11, 95),     S(-70, 78),     S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(-247, 42),    S(-67, 70),     S(-62, 76),     S(-152, 110),   S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(-127, 5),     S(50, 10),      S(-58, 64),     S(-113, 90),    S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(93, -82),     S(140, -43),    S(35, 6),       S(-55, 51),     S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
    S(-25, -118),   S(103, -104),   S(-4, -68),     S(-25, -67),    S(20, -14),     S(20, -14),     S(20, -14),     S(20, -14),     //
};
// clang-format on
}  // namespace Clockwork
