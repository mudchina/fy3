inherit NPC

void create()
{
        set_name("金毛鼠", ({ "mouse","laoshu","lao shu" }) )
        set("race", "野兽")
        set("age", 3)
        set("long", "一只浑身金毛的老鼠\n")
        
        set("str", 32)
        set("con", 36)

        set("limbs", ({ "头部", "身体", "前脚", "後脚", "尾巴" }) )
        set("verbs", ({ "bite", "claw" }) )

        set("chat_chance", 6)
        set("chat_msg", ({
                "金毛鼠在你上下口袋里穿来穿去。不知道想找什么？\n",
                "金毛鼠从口里吐出一块金币，慢慢的咬碎了仔细的涂在身上。\n",
                "金毛鼠在你的脚边转来转去的，不知道想干什么？\n",
                "金毛鼠爬上你的肩膀上，扭头四处看着。\n",
                "金毛鼠後腿抓了抓自己的耳朵。\n" }) )
        set_temp("apply/attack", 10)
        set_temp("apply/armor", 3)

        setup()
}

int accept_object(object who, object ob)
{
       if( ob->id("gold") ) {
                set_leader(who)
                message("vision", name() + "高兴地吱~吱~叫了起来。\n", environment())
                return 1
        }
}

