// Room: /u/xxy/room/huaying.c

inherit ROOM;

void create()
{
	set("short", "花影亭");
	set("long", @LONG
这是一座小巧玲珑的亭子,整体成四方形,上面用琉璃覆盖,亭周
绿荫点点,芳草凄凄,夕阳从亭的西面印过几缕阳光,照在亭边草从中
的一块残破石碑(bei)上,这就是有名的'残碑夕照'.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("item_desc", ([ /* sizeof() == 1 */
  "bei" : "碑高1.6米,宽0.9米,上面是原拓传刻的'汉甘陵相尚府君之碑'
字体纵横开阔,是难得的尊品.
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"milin1.c",
  "west" : __DIR__"gate",
]));

	setup();
	replace_program(ROOM);
}
