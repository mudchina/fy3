inherit BULLETIN_BOARD;

void create()
{
        set_name("工作日程留言板", ({ "board" }) );
        set("location", "/u/mool/workroom");
        set("board_id", "wizboard");
        set("long",
                "这是给关于巫师工作计划留言板。\n" );
        setup();
          set("capacity", 300);
        replace_program(BULLETIN_BOARD);
}

