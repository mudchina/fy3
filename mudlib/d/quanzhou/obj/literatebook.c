// literate.c

inherit ITEM;
string *names=({"论语","庄子","增广贤文","金人铭","老子","孟子","中庸","尔雅",
"大学","千字文","三字经"});

void create()
{
        set_name("〖"+names[random(sizeof(names))]+"〗", ({"book","shu"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "本");
	set("long", "一本经典子集方面的书,多读对读书写字有好处。\n");
        set("material", "paper");
        set("skill", ([
                        "name": "literate",
                        "sen_cost": 10+random(20),
                        "difficulty": 15+random(15),
                        "max_skill": 10+random(20),
]) );
        }
}

