// Room: /d/suzhou/jinfengzhuang.c

inherit ROOM;

void create()
{
	set("short", "金风庄");
	set("long", @LONG
庄内四周古树环绕，亭台楼榭隐约可见。听说此庄庄主乃是江湖上闻而失色
的以彼之道还施彼身“姑苏慕容”的家臣。虽为家臣，但此庄主武功却已登峰造
极。突然间你眼前一花，似乎有人正立于面前。
LONG
	);
	set("outdoors","suzhou");
	set("valid_startroom",1);
	set("objects",([
		__DIR__"npc/bao":1,
]));
	set("exits",([
	"up" :__DIR__"xiaoqige",
	"north" :__DIR__"chengdongjie2",
	"south" :__DIR__"lianwuchang",
]));
	set("no_clean_up", 0);

	setup();
	call_other("/obj/board/murongboard","???");
	replace_program(ROOM);
}
