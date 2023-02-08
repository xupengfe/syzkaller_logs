# syzkaller_logs

It saved the logs and bisect bad commit info of problems found by syzkaller.

And it will record the related community disscusstion link in each issue's
folder.

If you need the reproduced virtual machine environment:
git clone https://gitlab.com/xupengfe/repro_vm_env.git
cd repro_vm_env
tar -xvf repro_vm_env.tar.gz
cd repro_vm_env; ./start3.sh  // it needs qemu-system-x86_64 and I used v7.1.0
   // start3.sh will load bzImage_2241ab53cbb5cdb08a6b2d4688feb13971058f65 v6.2-rc5 kernel
   // You could change the bzImage_xxx as you want
In vm and login with root,  there is no password for root.

After login vm successfully, you could transfer reproduced binary to the VM
by below way, and reproduce the problem:
scp -P 10023 reproduced_binary root@localhost:/root/


Get the bzImage:
target kernel:
Please use the provied kconfig and copy it to kernel_src/.config
make olddefconfig
make -jx bzImage           //x should equal or less than cpu num your pc has

Fill the bzImage file into above start3.sh to load the target kernel vm.

Tips:
If you already have qemu-system-x86_64, please ignore below info.
If you want to install qemu v7.1.0 version,
git clone https://github.com/qemu/qemu.git
cd qemu
git checkout -f v7.1.0
mkdir build
cd build
yum install -y ninja-build.x86_64
../configure --target-list=x86_64-softmmu --enable-kvm --enable-vnc --enable-gtk --enable-sdl
make
make install


If you want to transfer target_file to the vm.
scp -P 10023 target_file root@localhost:/root/
