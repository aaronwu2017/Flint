// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen112_screen_init(void)
{
ui_Screen112 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen112, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen112, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen112, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Screen112, &lv_font_montserrat_36, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2222 = lv_btn_create(ui_Screen112);
lv_obj_set_width( ui_Button2222, 47);
lv_obj_set_height( ui_Button2222, 49);
lv_obj_set_x( ui_Button2222, -212 );
lv_obj_set_y( ui_Button2222, -132 );
lv_obj_set_align( ui_Button2222, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2222, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2222, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button2222, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button2222, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button2222, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button2222, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImgButton117 = lv_imgbtn_create(ui_Screen112);
lv_imgbtn_set_src(ui_ImgButton117, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_white_background_resized_25x20_png, NULL);
lv_obj_set_height( ui_ImgButton117, 26);
lv_obj_set_width( ui_ImgButton117, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_ImgButton117, lv_pct(-45) );
lv_obj_set_y( ui_ImgButton117, lv_pct(-40) );
lv_obj_set_align( ui_ImgButton117, LV_ALIGN_CENTER );

ui_Button112 = lv_btn_create(ui_Screen112);
lv_obj_set_height( ui_Button112, 38);
lv_obj_set_width( ui_Button112, lv_pct(17));
lv_obj_set_x( ui_Button112, 188 );
lv_obj_set_y( ui_Button112, -130 );
lv_obj_set_align( ui_Button112, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button112, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button112, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button112, lv_color_hex(0xFF7129), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button112, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Button112, 45, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_Button112, lv_color_hex(0x702828), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_Button112, 255, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_grad_color(ui_Button112, lv_color_hex(0x6D0E0E), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_main_stop(ui_Button112, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_grad_stop(ui_Button112, 255, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_grad_dir(ui_Button112, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_PRESSED);

ui_Label112 = lv_label_create(ui_Button112);
lv_obj_set_width( ui_Label112, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label112, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label112, 0 );
lv_obj_set_y( ui_Label112, -1 );
lv_obj_set_align( ui_Label112, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label112,"Done");
lv_obj_add_state( ui_Label112, LV_STATE_PRESSED );     /// States
lv_obj_set_style_text_color(ui_Label112, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label112, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label112, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button2222, ui_event_Button2222, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ImgButton117, ui_event_ImgButton117, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button112, ui_event_Button112, LV_EVENT_ALL, NULL);

//qr

 lv_color_t bg_color = lv_palette_lighten(LV_PALETTE_LIGHT_BLUE, 5);
    lv_color_t fg_color = lv_palette_darken(LV_PALETTE_BLUE, 4);

   qr = lv_qrcode_create(ui_Screen112, 250, lv_color_hex3(0x000),lv_color_hex3(0xeef));
   // lv_qrcode_set_size(qr, 150);
   // lv_qrcode_set_dark_color(qr, fg_color);
  //  lv_qrcode_set_light_color(qr, bg_color);



    lv_obj_center(qr);

    /*Add a border with bg_color*/
    lv_obj_set_style_border_color(qr, bg_color, 0);
    lv_obj_set_style_border_width(qr, 5, 0);

}
