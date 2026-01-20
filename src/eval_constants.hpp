#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(163, 160);
inline const PParam KNIGHT_MAT = S(505, 307);
inline const PParam BISHOP_MAT = S(457, 265);
inline const PParam ROOK_MAT   = S(551, 410);
inline const PParam QUEEN_MAT  = S(1082, 558);
inline const PParam TEMPO_VAL  = S(64, 13);

inline const PParam BISHOP_PAIR_VAL   = S(77, 162);
inline const PParam ROOK_OPEN_VAL     = S(113, -26);
inline const PParam ROOK_SEMIOPEN_VAL = S(40, 19);

inline const PParam DOUBLED_PAWN_VAL = S(-19, -85);

inline const PParam POTENTIAL_CHECKER_VAL = S(-66, -11);
inline const PParam OUTPOST_KNIGHT_VAL    = S(50, 40);
inline const PParam OUTPOST_BISHOP_VAL    = S(59, 27);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(48, 5);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(57, -25);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(37, 35);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(67, -47);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 11), S(56, 35), S(72, 69), S(170, 158), S(479, 229), S(641, 687),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(65, 41), S(58, 34), S(75, 64), S(178, 114), S(593, -12),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-80, -97), S(-79, -78), S(-54, 2), S(24, 74), S(112, 208), S(303, 278),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(41, -35), S(36, -6), S(29, 18), S(29, 63), S(96, 131), S(204, 216),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(11, -34), S(1, 6), S(-2, -22), S(-6, -42), S(-18, -89), S(-273, -104),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(17, 110), S(-9, 89), S(-8, 35), S(-6, 8), S(4, 7), S(47, 2), S(8, -5),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-290, -12), S(-25, 20), S(-7, 49), S(35, 62), S(36, 81), S(45, 86), S(20, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(13, -63), S(112, 90), S(166, 161), S(202, 191), S(251, 200), S(279, 232), S(316, 224), S(354, 225), S(401, 163),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-6, -109), S(57, 43), S(118, 81), S(146, 129), S(174, 156), S(189, 174), S(197, 189), S(216, 194), S(227, 203), S(245, 192), S(269, 180), S(327, 137), S(336, 136), S(404, 93),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(270, 99), S(192, 261), S(221, 278), S(240, 281), S(255, 291), S(260, 303), S(268, 311), S(278, 309), S(287, 314), S(298, 315), S(313, 313), S(325, 311), S(333, 310), S(354, 290), S(462, 194),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(471, 106), S(532, 235), S(583, 268), S(611, 363), S(622, 423), S(638, 454), S(642, 498), S(650, 503), S(653, 527), S(659, 536), S(663, 550), S(668, 553), S(680, 541), S(685, 543), S(688, 540), S(692, 535), S(697, 529), S(697, 528), S(709, 507), S(728, 489), S(742, 469), S(759, 435), S(787, 416), S(907, 303), S(956, 251), S(950, 244), S(871, 290), S(972, 218),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(552, -262), S(147, -120), S(58, -44), S(39, -9), S(15, -8), S(-16, 7), S(-38, 30), S(-65, 44), S(-81, 20),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(245, 232), S(361, 188), S(458, 127),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(481, 375), S(295, 235), S(161, 70),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(320, 319), S(443, 315), S(482, 324), S(591, 371), S(750, 330),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(868, 741), S(584, 606), S(325, 460), S(135, 258), S(80, -7), S(23, -296),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-85, 41), S(27, -18), S(-226, -130), S(63, 36), S(-239, -153),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-25, 19), S(-20, 19), S(-16, 15), S(-17, 10), S(-21, -12),
};

inline const PParam PAWN_THREAT_KNIGHT = S(245, 60);
inline const PParam PAWN_THREAT_BISHOP = S(220, 115);
inline const PParam PAWN_THREAT_ROOK   = S(205, 99);
inline const PParam PAWN_THREAT_QUEEN  = S(185, -41);

inline const PParam KNIGHT_THREAT_BISHOP = S(118, 73);
inline const PParam KNIGHT_THREAT_ROOK   = S(257, 15);
inline const PParam KNIGHT_THREAT_QUEEN  = S(156, -17);

inline const PParam BISHOP_THREAT_KNIGHT = S(111, 38);
inline const PParam BISHOP_THREAT_ROOK   = S(238, 72);
inline const PParam BISHOP_THREAT_QUEEN  = S(199, 56);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(3, -20), S(-3, -8), S(-3, -18), S(-9, -24), S(-15, -31), S(-21, -34), S(-24, -44), S(-29, -45), S(-38, -49),
};
inline const PParam BISHOP_LONG_DIAG = S(41, 37);

inline const PParam ROOK_LINEUP = S(14, 67);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(289, 302),    S(157, 370),    S(266, 325),    S(302, 224),    S(356, 161),    S(268, 239),    S(214, 269),    S(328, 221),    //
    S(112, 187),    S(159, 237),    S(171, 183),    S(160, 102),    S(147, 76),     S(122, 116),    S(106, 158),    S(73, 172),     //
    S(83, 157),     S(89, 172),     S(97, 140),     S(93, 94),      S(86, 80),      S(61, 106),     S(46, 138),     S(27, 159),     //
    S(62, 115),     S(81, 144),     S(78, 127),     S(85, 87),      S(64, 80),      S(49, 101),     S(12, 141),     S(-3, 127),     //
    S(52, 90),      S(104, 103),    S(84, 152),     S(78, 108),     S(54, 102),     S(29, 105),     S(14, 117),     S(-7, 109),     //
    S(87, 88),      S(178, 91),     S(100, 130),    S(107, 128),    S(81, 116),     S(67, 100),     S(49, 125),     S(12, 124),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-286, -44),   S(-215, 183),   S(-451, 433),   S(96, 146),     S(22, 152),     S(-113, 133),   S(-371, 195),   S(-346, 41),    //
    S(116, 118),    S(164, 119),    S(249, 79),     S(228, 112),    S(219, 126),    S(149, 122),    S(127, 131),    S(100, 103),    //
    S(188, 87),     S(204, 131),    S(256, 149),    S(218, 165),    S(189, 176),    S(127, 185),    S(136, 126),    S(114, 117),    //
    S(241, 131),    S(226, 150),    S(233, 174),    S(197, 207),    S(216, 196),    S(190, 182),    S(192, 139),    S(187, 115),    //
    S(232, 118),    S(270, 108),    S(244, 152),    S(235, 174),    S(218, 172),    S(215, 162),    S(215, 112),    S(178, 112),    //
    S(175, 93),     S(208, 89),     S(191, 125),    S(208, 152),    S(210, 146),    S(160, 135),    S(159, 99),     S(124, 81),     //
    S(188, 82),     S(211, 67),     S(182, 87),     S(179, 110),    S(167, 114),    S(147, 70),     S(153, 81),     S(110, 19),     //
    S(128, 62),     S(165, 120),    S(190, 73),     S(210, 60),     S(190, 81),     S(141, 63),     S(134, 95),     S(79, 38),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-57, 152),    S(-62, 168),    S(-363, 245),   S(-223, 212),   S(-190, 222),   S(-287, 253),   S(-105, 221),   S(-52, 161),    //
    S(88, 110),     S(0, 145),      S(65, 134),     S(-3, 185),     S(-15, 188),    S(38, 166),     S(34, 116),     S(46, 134),     //
    S(139, 131),    S(181, 125),    S(147, 128),    S(137, 151),    S(102, 152),    S(74, 128),     S(139, 137),    S(114, 115),    //
    S(128, 108),    S(149, 129),    S(174, 139),    S(146, 180),    S(176, 167),    S(111, 153),    S(120, 125),    S(83, 117),     //
    S(143, 83),     S(156, 112),    S(162, 134),    S(174, 153),    S(158, 162),    S(122, 153),    S(83, 134),     S(88, 99),      //
    S(160, 85),     S(196, 93),     S(187, 77),     S(159, 149),    S(152, 133),    S(130, 97),     S(163, 106),    S(101, 110),    //
    S(143, 33),     S(213, 31),     S(186, 73),     S(154, 99),     S(135, 110),    S(144, 82),     S(128, 62),     S(133, 46),     //
    S(131, 23),     S(126, 95),     S(138, 119),    S(156, 77),     S(161, 65),     S(153, 123),    S(149, 78),     S(110, 47),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(415, 240),    S(452, 248),    S(400, 276),    S(409, 259),    S(403, 260),    S(348, 273),    S(369, 272),    S(366, 275),    //
    S(313, 293),    S(376, 283),    S(459, 260),    S(391, 285),    S(391, 288),    S(347, 295),    S(267, 324),    S(265, 323),    //
    S(288, 284),    S(419, 249),    S(447, 243),    S(422, 245),    S(381, 257),    S(334, 279),    S(329, 283),    S(253, 315),    //
    S(264, 273),    S(341, 273),    S(382, 255),    S(347, 258),    S(343, 267),    S(304, 284),    S(284, 286),    S(222, 301),    //
    S(225, 228),    S(296, 238),    S(278, 254),    S(266, 247),    S(253, 256),    S(239, 282),    S(209, 272),    S(183, 270),    //
    S(194, 199),    S(258, 197),    S(261, 220),    S(237, 217),    S(240, 211),    S(215, 247),    S(204, 226),    S(162, 240),    //
    S(110, 213),    S(226, 155),    S(239, 182),    S(241, 188),    S(230, 191),    S(219, 204),    S(197, 188),    S(170, 203),    //
    S(155, 203),    S(165, 227),    S(236, 189),    S(255, 177),    S(235, 195),    S(225, 210),    S(211, 201),    S(193, 223),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(456, 407),    S(546, 335),    S(519, 375),    S(434, 483),    S(450, 445),    S(443, 438),    S(482, 368),    S(370, 453),    //
    S(481, 439),    S(431, 535),    S(425, 551),    S(281, 616),    S(288, 609),    S(353, 568),    S(383, 482),    S(394, 468),    //
    S(415, 498),    S(514, 481),    S(435, 551),    S(402, 569),    S(354, 575),    S(369, 529),    S(436, 437),    S(410, 411),    //
    S(493, 397),    S(488, 466),    S(451, 504),    S(417, 558),    S(410, 559),    S(410, 494),    S(461, 402),    S(454, 373),    //
    S(477, 398),    S(487, 417),    S(460, 465),    S(432, 511),    S(435, 503),    S(428, 467),    S(444, 397),    S(456, 345),    //
    S(468, 316),    S(500, 350),    S(499, 419),    S(458, 401),    S(457, 391),    S(466, 411),    S(467, 353),    S(452, 327),    //
    S(447, 193),    S(492, 154),    S(488, 241),    S(495, 292),    S(480, 319),    S(480, 284),    S(448, 333),    S(449, 318),    //
    S(406, 229),    S(451, 36),     S(454, 68),     S(482, 155),    S(487, 237),    S(489, 182),    S(479, 211),    S(432, 262),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-420, -242),  S(13, 88),      S(164, 8),      S(-88, -4),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(164, -106),   S(230, 40),     S(188, 49),     S(111, -17),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(76, 38),      S(248, 56),     S(231, 44),     S(89, 16),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-189, 59),    S(152, 37),     S(57, 39),      S(14, 33),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-213, 34),    S(80, 11),      S(81, -0),      S(-38, 41),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-96, 19),     S(153, -15),    S(105, -6),     S(42, 13),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(9, -18),      S(130, -15),    S(80, -16),     S(0, 7),        S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-125, -34),   S(-9, -8),      S(-86, -11),    S(-91, -50),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(-57, 28), S(6, -33), S(56, -45), S(30, -26), S(35, -26), S(54, -45), S(11, -42), }},
  {{ S(-59, 30), S(55, -20), S(69, -45), S(15, 2), S(18, -11), S(72, -55), S(53, -30), }},
  {{ S(-49, 25), S(53, -15), S(-7, -28), S(-6, -5), S(-5, -12), S(-11, -36), S(53, -19), }},
  {{ S(-45, 12), S(21, 29), S(11, 6), S(8, 10), S(14, 4), S(20, -1), S(21, 5), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(-11, -86), S(39, -23), S(18, -14), S(-8, -10), S(16, 18),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(-25, -6), S(8, -9), S(16, -13), S(6, 1), S(13, 8), S(7, -7), S(7, -9), }},
  {{ S(-35, 5), S(-14, -10), S(11, -8), S(-6, 26), S(4, 18), S(11, -11), S(-14, -14), }},
  {{ S(3, -10), S(28, -37), S(15, -12), S(2, 4), S(8, 8), S(16, -11), S(24, -37), }},
  {{ S(-4, 15), S(14, 11), S(35, 3), S(9, -6), S(6, -4), S(33, 6), S(27, 6), }},
}};
// Epoch duration: 5.15549s
// clang-format on
}  // namespace Clockwork
