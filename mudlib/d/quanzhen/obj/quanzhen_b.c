
inherit BULLETIN_BOARD;

void create()
{
	set_name("全真弟子留言板", ({ "board" }) );
	set("location", "/u/lgg/quanzhen/datang1");
	set("board_id", "quanzhen_b");
	set("long", "这是一个供全真门下交流的留言板。\n" );
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}

