#ifndef _LAYER_H
#define _LAYER_H
void layer_conv_init(kpu_task_t* task, uint16_t w, uint16_t h, uint8_t ch_in, uint8_t ch_out, float* conv_data);
void layer_conv_run(kpu_task_t* task, uint8_t* img_src, uint8_t* img_dst, plic_irq_callback_t callback);

#endif
