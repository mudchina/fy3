// 五毒弟子留言板 by ksusan 7/12/97
inherit BULLETIN_BOARD;

void create()
{
	set_name("五仙石", ({ "stone" }) );
        set("location", "/d/wudu/liangtin");
        set("board_id", "wuduboard");
        set("long",
		"这是一块晶莹剔透的绿色宝石，相传是飞来石，边上\n
		是五毒弟子发表心得体会，慨叹酸甜苦辣的留言板(help board)。\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
