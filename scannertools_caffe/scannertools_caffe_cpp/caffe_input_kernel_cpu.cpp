#include "caffe_input_kernel.h"

namespace scanner {

REGISTER_OP(CaffeInput)
    .frame_input("frame")
    .frame_output("caffe_frame")
    .protobuf_name("CaffeInputArgs");

REGISTER_KERNEL(CaffeInput, CaffeInputKernel)
    .device(DeviceType::CPU)
    .batch()
    .num_devices(1);
}
