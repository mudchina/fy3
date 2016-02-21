// thd:nwbeach.c

inherit ROOM;

void create()
{
      set("short", "海滩");
	set("long", @LONG
这是一片洁净的海滩。海滩的沙子因为有海水不断的冲刷，而显得非
常干净。你走在着软软的细沙上，留下了一行整齐的脚印和那碧蓝的大海
向呼应构成了一幅绝妙的山水画。沙滩上有不少漂亮的贝壳，很惹人喜爱
。但这海滩也长有些蛇虫出没，你可要小心啊。
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/beike1" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "southwest" : __DIR__"road1",
          "northwest" : __DIR__"nbeach",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

