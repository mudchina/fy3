//恒山派留言板 by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("恒山化缘薄",({"board"}));
set("location","/d/hengshan/baiyunan");
set("board_id","hengshan_board");
        set("long",
"恒山派的尼姑用来化缘时记录的薄子,给俗家弟子们偷\n
出来乱些一通,所以干脆用来留言.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
