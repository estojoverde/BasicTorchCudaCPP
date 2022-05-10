# BasicTorchCudaCPP
Q'n'D steps to compile, link and run a simple Torch C++ code using CUDA


## Dependencies
- CUDA 11.4
- NVHPC 21.5 (?)
- GCC 11.1.0
- CMAKE 3.22.1 (newer versions might turn into a headache)
- Anaconda/Miniconda

## Step 1
Create Conda env with pytorch.yml

```bash
conda env create -f pytorch.yml
```


## Step 2
Set appropriate Env Vars

```
export CURRENT_CUDA="11.4"
export CURRENT_NVHPC="21.5"
export CURRENT_GCC="11.1.0"
export CURRENT_CMAKE="3.22.1"
export CURRENT_CONDAENV="pytorch"
export CONDA_ENV_BASE="/home/$USER/miniconda3/envs" #my case, using miniconda, set yours accordingly


export CUDA_HOME="/usr/local/cuda-$CURRENT_CUDA" #my case, check yours
export PATH="$CUDA_HOME/bin:$PATH"

export LD_LIBRARY_PATH="$CUDA_HOME/lib64:$LD_LIBRARY_PATH"
```

## Step 3
Run cmake and make inside build folder

```
cd build/

cmake -DCUDNN_LIBRARY_PATH=$CONDA_ENV_BASE/$CURRENT_CONDAENV/lib \
-DCUDNN_INCLUDE_DIR=$CONDA_ENV_BASE/$CURRENT_CONDAENV/include \
-DCMAKE_PREFIX_PATH=`python -c 'import torch;print(torch.utils.cmake_prefix_path)'`  ../

make

```

## Step 4
Run =] 

