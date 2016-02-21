// Room: /d/quanzhou/sibosi.c

inherit ROOM;

void create()
{
	set("short", "市舶司");
	set("long", @LONG
市舶司是专门为接待世界各地的客人而设的,所有来上贡的国外来使,
来做生意的客商,都可以在此地受到招待,你现在所站的地方是大门,旁边有
差役看守.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tingtang",
  "east" : __DIR__"nstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chaiyi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
