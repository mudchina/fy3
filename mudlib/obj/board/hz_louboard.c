//杭州楼外楼留言板 by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("飞来石",({"stone"}));
set("location","/d/hangzhou/erlou");
set("board_id","hz_louboard");
        set("long",
"石面平滑,上面有些天然的花纹,据说是天外飞来的陨石.\n
上面是许多题款.(help board).\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
