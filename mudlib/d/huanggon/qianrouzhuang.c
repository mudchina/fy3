// Room: /d/huanggon/qianrouzhuang.c

inherit ROOM;

void create()
{
	set("short", "钱兴隆肉庄");
	set("long", @LONG
此处是北城的钱兴隆肉庄,听说宫中的肉都是此处进供的.你看到一
排矮柜台上摆着大砧板,剁肉刀,剔骨刀,厚板刀摆了好几把.十多块厚大
的猪肉挂在钩子上.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qianlaob.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ndajie1",
]));

	setup();
	replace_program(ROOM);
}
