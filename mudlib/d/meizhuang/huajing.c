// Room: /d/suzhou/meizhuang/huajing.c

inherit ROOM;

void create()
{
	set("short", "花径");
	set("long", @LONG
这是一条清幽的小径，花径再往北通到三间石屋之前。屋前屋后七八
株苍松夭矫高挺，遮得四下里阴沉沉地。往南则是月洞门。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"chuangongfang4",
  "south" : __DIR__"yuedongmen",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
