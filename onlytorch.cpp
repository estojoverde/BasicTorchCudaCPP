#include <torch/torch.h>
#include <c10/cuda/CUDAStream.h>
#include <iostream>

int main() {


//   torch::Device device = torch::kCPU;
//   std::cout << "CUDA DEVICE COUNT: " << torch::cuda::device_count() << std::endl;
//   if (torch::cuda::is_available())
//   {
//     std::cout << "CUDA is available! Training on GPU." << std::endl;
//     device = torch::kCUDA;
//   }


  //std::cout << "CUDA CURRENT STREAM" << c10::cuda::getCurrentCUDAStream() << std::endl;


  // torch::Tensor tensor = torch::rand({2, 3});
  // std::cout << tensor << std::endl;

  torch::Tensor out = torch::rand( { 3, 3 }, torch::device(at::kCUDA).dtype(at::kFloat) );

  std::cout << out << std::endl;


}

