// Room: /u/oldsix/room1/chufang.c

inherit ROOM;

void create()
{
	set("short", "厨房");
	set("long", @LONG
只见厨师老顾忙得满头大汗，正不停口的向镬中吐唾沫，跟着双手连搓，将
污泥不住搓到镬中。你看到这不禁又好气、又好笑。老顾头见你进来吓了一跳。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"huatan",
]));
	set("objects",([
		__DIR__"npc/gu" :1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
