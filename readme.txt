记录文件user?.dat


----------------------------------------------------------------------------------------------------
字节(Dec) 长度(Dec) 说明(Hex)


---------- 基本数据 --------------------------------------------------------------------------------
00 4 不明(定值0C)
04 4 Adventure 当前关(01-32)
08 4 金钱
12 4 Adventure 完成次数


---------- Survival 数据 ---------------------------------------------------------------------------
16 4 Survival 01 已完成(00-05)Flags
20 4 Survival 02 已完成(00-05)Flags
24 4 Survival 03 已完成(00-05)Flags
28 4 Survival 04 已完成(00-05)Flags
32 4 Survival 05 已完成(00-05)Flags
36 4 Survival 06 (Hard) 已完成(00-0A)Flags
40 4 Survival 07 (Hard) 已完成(00-0A)Flags
44 4 Survival 08 (Hard) 已完成(00-0A)Flags
48 4 Survival 09 (Hard) 已完成(00-0A)Flags
52 4 Survival 10 (Hard) 已完成(00-0A)Flags
64 4 Survival:Endless 最高记录


---------- Mini Game 数据 --------------------------------------------------------------------------
76 4 Mini Game 01 完成次数
80 4 Mini Game 02 完成次数
84 4 Mini Game 03 完成次数
88 4 Mini Game 04 完成次数
92 4 Mini Game 05 完成次数
96 4 Mini Game 06 完成次数
100 4 Mini Game 07 完成次数
104 4 Mini Game 08 完成次数
108 4 Mini Game 09 完成次数
112 4 Mini Game 10 完成次数
116 4 Mini Game 11 完成次数
120 4 Mini Game 12 完成次数
124 4 Mini Game 13 完成次数
128 4 Mini Game 14 完成次数
132 4 Mini Game 15 完成次数
136 4 Mini Game 16 完成次数
140 4 Mini Game 17 完成次数
144 4 Mini Game 18 完成次数
148 4 Mini Game 19 完成次数
152 4 Mini Game 20 完成次数


---------- The Tree of Wisdom 数据 -----------------------------------------------------------------
212 4 The Tree of Wisdom 生长/高度


---------- Puzzle 数据I: Vasebreaker ---------------------------------------------------------------
216 4 Puzzle:Vasebreaker 01 完成次数
220 4 Puzzle:Vasebreaker 02 完成次数
224 4 Puzzle:Vasebreaker 03 完成次数
228 4 Puzzle:Vasebreaker 04 完成次数
232 4 Puzzle:Vasebreaker 05 完成次数
236 4 Puzzle:Vasebreaker 06 完成次数
240 4 Puzzle:Vasebreaker 07 完成次数
244 4 Puzzle:Vasebreaker 08 完成次数
248 4 Puzzle:Vasebreaker 09 完成次数
252 4 Puzzle:Vasebreaker:Endless 最高记录


---------- Puzzle 数据II: I,Zombie -----------------------------------------------------------------
256 4 Puzzle:I,Zombie 01 完成次数
260 4 Puzzle:I,Zombie 02 完成次数
264 4 Puzzle:I,Zombie 03 完成次数
268 4 Puzzle:I,Zombie 04 完成次数
272 4 Puzzle:I,Zombie 05 完成次数
276 4 Puzzle:I,Zombie 06 完成次数
280 4 Puzzle:I,Zombie 07 完成次数
284 4 Puzzle:I,Zombie 08 完成次数
288 4 Puzzle:I,Zombie 09 完成次数
292 4 Puzzle:I,Zombie:Endless 最高记录


---------- SHOP 出售数据 ---------------------------------------------------------------------------
416 4 Gatling Pea 升级卡片已购买(00-01)
420 4 Twin Sunflower 升级卡片已购买(00-01)
424 4 Gloom-shroom 升级卡片已购买(00-01)
428 4 Cattail 升级卡片已购买(00-01)
432 4 Winter Melon 升级卡片已购买(00-01)
436 4 Gold Magnet 升级卡片已购买(00-01)
440 4 Spikerock 升级卡片已购买(00-01)
444 4 Cob Cannon 升级卡片已购买(00-01)
448 4 Imitater 卡片已购买
456 4 Marigold Sprout I 已购买(2000.01.01至今天数,2000.01.01为0)
460 4 Marigold Sprout II 已购买(2000.01.01至今天数,2000.01.01为0)
464 4 Marigold Sprout III 已购买(2000.01.01至今天数,2000.01.01为0)
468 4 Golden Watering Can 升级已购买(00-01)
472 4 Fertilizer 已购买(03E8-03FC,未开启为0000)剩余
476 4 Bug Spray 已购买(03E8-03FC,未开启为0000)剩余
480 4 Phonograph 升级已购买(00-01)
484 4 Gardening Glove 升级已购买(00-01)
488 4 Mushroom Garden 已购买(00-01)
492 4 Aquarium Garden 已购买(00-01)
496 4 Snail 已购买(上次唤醒时间，1970.01.01.08.00.00至今秒数,1970.01.01.08.00.00为0)
500 4 Seed Slot 已升级(00-04)
504 4 Pool Cleaners 升级已购买(00-01)
508 4 Roof Cleaners 升级已购买(00-01)
512 4 Roof Rake 已购买(00-03)剩余
520 4 Chocolate 已获得(03E8-03FC,未开启为0000)剩余
524 4 The Tree of Wisdom 已购买(00-01)
528 4 Tree Food 已购买(03E8-03FC,未开启为0000)剩余
532 4 Wall-nut First Aid 升级已购买(00-01)


---------- 其他数据 --------------------------------------------------------------------------------
748 4 未知(00-01)
752 12 未知,可能与 The Tree of Wisdom 有关
768 4 Mini Game 开启提示标记(00-01)
788 4 Survival 开启提示标记(00-01)
796 4 Adventure 完成提示标记(00-01)


---------- Zen Garden 数据 -------------------------------------------------------------------------
816 4 Zen Garden 模式拥有花总数
820字节开始是 Zen Garden 模式下花的具体数据,每个花需要88字节

时间计算：是从1970.01.01.08.00.00到上次浇水/施肥/喷杀虫剂/听音乐/吃巧克力时所经过的秒数换算为16进制的值，可能会有5秒左右的误差，原因不明。对于没进行过浇水/施肥/喷杀虫剂/听音乐/吃巧克力操作的花，上次浇水/施肥/满足/吃巧克力时间为0。如果上次的操作失效了，相应的值并不清零。

0字节代表花的主类型，32字节代表花的亚类型，就是Marigold的颜色。

4字节：花所在的花园。00是第一个花园，01是蘑菇园，02是推车，03是水族馆。

8字节：位置。在蘑菇园和水族馆中，这个字节就代表了位置，大家可以尝试下每个值对应游戏中显示的位置。

12字节：和8字节联合组成普通花园的位置。左上是（00,00），右下是（07,03），一共8*4=32个格子。

16字节：植物朝向。0是正常方向，1是反方向。

20字节：

24字节：上次浇水时间。

28字节：

32字节：00和01是不会出错的，但是正常游戏都从02开始到0C的值，一共11种颜色。除了Marigold的花，这个值一律是0。

36字节：花的状态。00表示幼苗，01是刚成长，02是第二次长大，03是最大。

40字节：实际浇水次数。应浇水次数指每轮浇水所需的次数，是个介于3和5之间的固定值。实际浇水次数指本轮已经完成的浇水次数，这个值从0开始，每浇一次水增加1，施肥/喷杀虫剂/放音乐前，等于应浇水次数，施肥/喷杀虫剂/放音乐后本轮结束，从此时至下一轮开始前，值为0。

44字节：应浇水次数。

48字节：满足方式。如果是喷杀虫剂，值为3，如果是听音乐，值为4。满足方式这个值，只有在满足之前那轮浇水开始后，值变成3或4，满足后变为0，至下一次满足前都维持0。

52字节：

56字节：上次喷杀虫剂/放音乐时间。

60字节：

64字节：上次施肥时间。

68字节：

72字节：上次吃巧克力时间。没有巧克力的时候是00 00 00 00。

76字节：

80字节：

84字节：

0字节对应表
TYPE(B1:L1) TYPE(VISI) TYPE(VISI,CN) SUBTYPE(B33:L1) SUBTYPE(VISI)
00(Hex) Peashooter 豌豆炮
01(Hex) Sunflower 太阳花
02(Hex) Cherry Bomb 樱桃炸弹
03(Hex) Wall-nut 小坚果
04(Hex) Potato Mine 地雷
05(Hex) Snow Pea 冰冻豌豆炮
06(Hex) Chomper 食人花
07(Hex) Repeater 连发豌豆炮
08(Hex) Puff-shroom 紫矮蘑菇
09(Hex) Sun-shroom 太阳蘑菇
0A(Hex) Fume-shroom 毒气蘑菇
0B(Hex) Grave Buster 坟墓杀手
0C(Hex) Hypno-shroom 迷乱蘑菇
0D(Hex) Scaredy-shroom 畏缩的蘑菇
0E(Hex) Ice-shroom 冰冻蘑菇
0F(Hex) Doom-shroom 末日蘑菇
10(Hex) Lily Pad 荷叶
11(Hex) Squash 跳瓜
12(Hex) Threepeater 三联豌豆炮
13(Hex) Tangle Kelp 海带
14(Hex) Jalapeno 辣椒
15(Hex) Spikeweed 棘刺草
16(Hex) Torchwood 燃烧的木桩
17(Hex) Tall-nut 大坚果
18(Hex) Sea-shroom 水生蘑菇
19(Hex) Plantern 灯
1A(Hex) Cactus 仙人掌
1B(Hex) Blover 三叶草
1C(Hex) Split Pea 双向豌豆炮
1D(Hex) Starfruit 星果
1E(Hex) Pumpkin 南瓜
1F(Hex) Magnet-shroom 磁力蘑菇
20(Hex) Cabbage-pult 卷心菜
21(Hex) Flower Pot 花盆
22(Hex) Kernel-pult 玉米
23(Hex) Coffee Bean 咖啡豆
24(Hex) Garlic 大蒜
25(Hex) Umbrella Leaf 遮蔽叶
26(Hex) Marigold 万寿菊
27(Hex) Melon-pult 西瓜
28(Hex) Gatling Pea 机枪豌豆炮
29(Hex) Twin Sunflower 孪生太阳花
2A(Hex) Gloom-shroom 爆毒蘑菇
2B(Hex) Cattail 猫尾花
2C(Hex) Winter Melon 冰冻西瓜
2D(Hex) Gold Magnet 金磁草
2E(Hex) Spikerock 石化棘刺
2F(Hex) Cob Cannon 玉米大炮
30(Hex) Imitater 拟形种子
31(Hex) Explode-o-nut 炸弹坚果
32(Hex) Gaint Wall-nut 巨型坚果
33(Hex) Sprout 花苗

32字节对应表
00(Hex) 白
01(Hex) #(无色)
02(Hex) 白
03(Hex) 品红
04(Hex) 橙
05(Hex) 浅红
06(Hex) 天青
07(Hex) 红
08(Hex) 蓝
09(Hex) 紫
0A(Hex) 浅紫
0B(Hex) 黄
0C(Hex) 浅绿