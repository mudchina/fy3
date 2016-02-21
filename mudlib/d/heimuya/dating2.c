// Room: /d/heimuya/dating2.c

inherit ROOM;

void create()
{
	set("short", "白虎堂");
	set("long", @LONG
此处就是日月教下辖白虎堂，由雕侠上官云管理。据说圣姑由山下
回来，也居住于此.西面过去是条长廊，正面有块大大的金色牌匾(bian),
东边树林间是条小道。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baihudizi.c" : 2,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "bian" : "上面写到：长河落日，白虎在天；
          千秋万载，一统江湖 。
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"linjxd6",
  "west" : __DIR__"baistep1",
]));

	setup();
	replace_program(ROOM);
}
