  //   Wangzc kunlun's 玩家留言板
inherit BULLETIN_BOARD;

void create()
{
      set_name("玩家告示板", ({ "board" }) );
        set("location", "/d/kunlun/neiting");
          set("board_id", "board2");
        set("long",
		"这是玩家发表心得体会，慨叹酸甜苦辣的留言板(help board)。\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
