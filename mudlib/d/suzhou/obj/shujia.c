// box.c 功德箱

#include <ansi.h>

inherit ITEM;
string* foxue=({
	"b_amituo",
	"b_daniepan",
	"b_jingangjing",
	"b_lengjiajing",
	"b_lengyanjing",
	"b_yuanjuejing",
});
string* daoxue=({
	"b_cantongqi",
	"b_daoxiangji",
	"b_huangtingjing",
	"b_laozi",
	"b_xingmingguizhi",
	"b_yinfujing",
});
string* wenxue=({
	"b_shi",
	"b_shu",
	"b_li",
	"b_yi",
	"b_yue",
	"b_chunqiu",
});
void create()
{
	object shu;
	set_name("老秀才的小书架",({"shujia","shu jia","jia"}));
	set_weight(3000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "个");
	set("long","红木制成的书架，上面有老秀才写的几行字：\n"+
	HIG"有借(get)有还(put)，再借不难。\n"NOR);
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
	}
	setup();
	shu=new("/obj/book/foxue/"+foxue[random(sizeof(foxue))]+".c");
	shu->set("name","老秀才的藏书"+shu->query("name"));
	shu->set("no_sell",1);
	shu->move(this_object());
	shu=new("/obj/book/daoxue/"+daoxue[random(sizeof(daoxue))]+".c");
	    shu->set("name","老秀才的藏书"+shu->query("name"));
		shu->set("no_sell",1);
	shu->move(this_object());
	shu=new("/obj/book/wenxue/"+wenxue[random(sizeof(wenxue))]+".c");
	shu->set("name","老秀才的藏书"+shu->query("name"));
	shu->set("no_sell",1);
	shu->move(this_object());
}

int is_container() { return 1; }

