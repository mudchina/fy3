//南海白云庵留言板 by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("桃木屏障",({"board"}));
set("location","/d/hainan/jingtang");
set("board_id","hainan_board");
        set("long",
"以浅红色桃木制成的屏风.上面是南海弟子的一些留言.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
