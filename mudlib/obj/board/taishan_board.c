//泰山派留言板 by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("泰山玉皇石",({"stone"}));
set("location","/d/taishan/yuhuang");
set("board_id","taishan_board");
        set("long",
"据说有一天,天帝发怒,雷动九霄,玉阙上的一颗珍珠不慎\n
掉下,落到泰山之颠,形成此石.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
