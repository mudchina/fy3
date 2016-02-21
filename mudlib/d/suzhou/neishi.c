// Room: /d/suzhou/neishi.c

inherit ROOM;

void create()
{
	set("short", "内室");
	set("long", @LONG
室内摆饰甚是精巧，显然不是包庄主老粗所为。正对面的香案上供放着包家
氏谱，香炉内冒出股股清烟。左首处的书案旁端坐着一位娇小可爱的小姑娘，正
睁着黑亮的大眼睛一眨不眨的看着你。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"lianwuchang",
]));
	set("objects",([
	__DIR__"obj/shugui":1,
		__DIR__"npc/baobuliang":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
