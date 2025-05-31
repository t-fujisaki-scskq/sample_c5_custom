# sample_c5_custom
etロボコン2025 2025年度技術教育1資料のsample05を改修したプログラムです。シミュレータでエラーが発生します。

### シミュレータ環境 Ubuntuでビルド
> PRETTY_NAME="Ubuntu 24.04.2 LTS"
NAME="Ubuntu"
VERSION_ID="24.04"
VERSION="24.04.2 LTS (Noble Numbat)"
VERSION_CODENAME=noble
ID=ubuntu
ID_LIKE=debian
HOME_URL="https://www.ubuntu.com/"
SUPPORT_URL="https://help.ubuntu.com/"
BUG_REPORT_URL="https://bugs.launchpad.net/ubuntu/"
PRIVACY_POLICY_URL="https://www.ubuntu.com/legal/terms-and-policies/privacy-policy"
UBUNTU_CODENAME=noble
LOGO=ubuntu-logo
Linux DESKTOP-43KSGUL 6.6.87.1-microsoft-standard-WSL2 #1 SMP PREEMPT_DYNAMIC Mon Apr 21 17:08:54 UTC 2025 x86_64 x86_64 x86_64 GNU/Linux
```
etrobo@DESKTOP-43KSGUL:~/etrobo$ make img=sample_c5_custom sim
invoke: make img=sample_c5_custom sim
rm -rf /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/.././OBJ/
cd /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/.././OBJ/ && \
ruby /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/../../configure.rb  -T v850_gcc -A app \
        -a ../workspace/sample_c5_custom \
        -D ../.. \
        -l c++ \
        -m ../common/Makefile.img \
        -o "" \
        -t \
        -d ./dep \
        -C ../common/athrill_common.cdl \
        -U "" && \
make clean
Generating Makefile from ../common/Makefile.img.
make[1]: Entering directory '/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ'
rm -f \#* *~ ./*.o ./dep/*.d  check.timestamp
rm -f asp asp.syms asp.srec asp.bin
rm -f kernel_opt.timestamp   cfg3_out.db
rm -f cfg3_out.syms cfg3_out.srec 
rm -f kernel_cfg.timestamp kernel_cfg.h kernel_cfg.c   cfg2_out.db
rm -f cfg2_out.syms cfg2_out.srec kernel_cfg_asm.S 
rm -f offset.timestamp offset.h
rm -f cfg1_out.syms cfg1_out.srec cfg1_out
rm -f cfg1_out.timestamp cfg1_out.c cfg1_out.db
rm -rf ./gen
rm -f libkernel.a
make[1]: Leaving directory '/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ'
# -S "banner.o syslog.o serial.o logtask.o" 
(cd /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/.././OBJ/ && \
make offset.h kernel_cfg.h && \
make -j8 > /dev/null ) && \
cp /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/.././OBJ//asp /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace && \
echo "/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/sample_c5_custom" > /home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/workspace/appdir
make[1]: Entering directory '/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ'
if grep -sq  "tecsgen.cfg" ../workspace/sample_c5_custom/app.cfg ; then \
        cat ../workspace/sample_c5_custom/app.cfg > tmp_app.cfg ; \
else \
        echo "INCLUDE(\"tecsgen.cfg\")" >> tmp_app.cfg; \
        cat ../workspace/sample_c5_custom/app.cfg >> tmp_app.cfg ; \
fi; 
ruby ../../tecsgen/tecsgen.rb ../common/athrill_common.cdl -R -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include --cpp "v850-elf-gcc -DBUILD_EV3_PLATFORM -DLABEL_ASM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include  -D TECSGEN -E" -g ./gen
tecsgen  version 1.9.0  
  CFG[1]  cfg1_out.timestamp
ruby ../../cfg/cfg.rb --pass 1 --kernel asp -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include --api-table ../../kernel/kernel_api.def --symval-table ../../kernel/kernel_sym.def  --symval-table ../../target/v850_gcc/target_sym.def --api-table ../common/spikeapi/ev3api.csv \
                                        -M ./dep/cfg1_out_c.d ../../target/v850_gcc/target_kernel.cfg tmp_app.cfg
tmp_app.cfg:8: warning: `DOMAIN' is not supported
[cfg.rb] Generated cfg1_out.c
v850-elf-gcc -c -O2 -Wall -g  -DSYSLOG_IMPLEMENT_AS_PRINTF -mv850e2v3 -mdisable-callt -mhard-float -DBUILD_EV3_PLATFORM -DLABEL_ASM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include -DUSE_RASPIKE_ART -DALLFUNC  -I../../kernel ../../arch/v850_gcc/start.S
v850-elf-gcc -c -O2 -Wall -g  -DSYSLOG_IMPLEMENT_AS_PRINTF -mv850e2v3 -mdisable-callt -mhard-float -DBUILD_EV3_PLATFORM -DLABEL_ASM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include -DUSE_RASPIKE_ART -DALLFUNC  -I../../kernel ../../arch/v850_gcc/v850_mul.S
  CC      cfg1_out.c
  LINK    cfg1_out
v850-elf-g++ -O2 -Wall -g  -DSYSLOG_IMPLEMENT_AS_PRINTF -mv850e2v3 -mdisable-callt -mhard-float -DBUILD_EV3_PLATFORM -DLABEL_ASM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include -DUSE_RASPIKE_ART -L . -nostdlib -nostartfiles -lgcc -lc    -nostdlib -Wl,-T,../../target/v850_gcc/v850es_fk3.ld -o cfg1_out \
                                        start.o v850_mul.o  ./cfg1_out.o  -lstdc++ -lm -lc -lgcc -std=c++11 
  NM      cfg1_out.syms
  OBJCOPY cfg1_out.srec
  CFG[2]  offset.timestamp
ruby ../../cfg/cfg.rb --pass 2 -O --kernel asp -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include -T ../../target/v850_gcc/target_offset.trb \
                        --rom-symbol cfg1_out.syms --rom-image cfg1_out.srec
[cfg.rb] Generated offset.h
  CFG[2]  kernel_cfg.timestamp
ruby ../../cfg/cfg.rb --pass 2 --kernel asp -I. -I../../include -I. -I../../include -I../../target/v850_gcc/drivers -I../../target/v850_gcc -I../../arch/v850_gcc -I../../arch/gcc -I../.. -I../.. -I/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I../workspace/sample_c5_custom -I../../target/v850_gcc/athrill -I../../../athrill/apl/include -I../../../athrill/apl/src -I../common -I../common/spikeapi -I../common/spikeapi/include -I../../../athrill/apl/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/v850_gcc/pil/include -I../../target/v850_gcc/TLSF-2.4.6/include -I../../target/v850_gcc/drivers/brick/include -I../../target/v850_gcc/drivers/uart/include -I../../target/v850_gcc/drivers/gpio/include -I../../target/v850_gcc/drivers/motor/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/v850_gcc/drivers/common/virtual-linux-kernel/include -I../../target/v850_gcc/drivers/common/include -I../../target/v850_gcc/platform/include -T ../../target/v850_gcc/target_kernel.trb
[cfg.rb] Generated kernel_cfg.h
[cfg.rb] Generated kernel_cfg.c
[cfg.rb] Generated kernel_cfg_asm.S
make[1]: Leaving directory '/home/etrobo/etrobo/raspike-athrill-v850e2m/sdk/OBJ'
  CC      ../../target/v850_gcc/platform/src/ev3main.c
  CC      ../../target/v850_gcc/pil/src/ev3_svc.c
  CC      ../../target/v850_gcc/pil/src/driver_interface_brick.c
  CC      ../../target/v850_gcc/drivers/brick/src/brick_dri.c
  CC      ../../target/v850_gcc/drivers/uart/src/uart_dri.c
  CC      ../../target/v850_gcc/drivers/gpio/src/gpio_dri.c
  CC      ../../target/v850_gcc/drivers/uart/src/athrill_serial_driver.c
  CC      ../../library/log_output.c
  CC      ../../library/vasyslog.c
  CC      ../../library/t_perror.c
  CC      ../../library/strerror.c
../../library/vasyslog.c: In function 'syslog':
../../library/vasyslog.c:60:7: warning: unused variable 'c' [-Wunused-variable]
  char c;
       ^
../../library/vasyslog.c:59:7: warning: unused variable 'sz' [-Wunused-variable]
  char sz;
       ^
../../library/vasyslog.c:58:9: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  uint_t i;
         ^
../../library/vasyslog.c:56:9: warning: variable 'logbuf' set but not used [-Wunused-but-set-variable]
  SYSLOG logbuf;
         ^
  CC      ../common/spikeapi/src/ev3api.c
  CC      ../common/spikeapi/src/spikeapi_newlib.c
  CC      ../common/spikeapi/src/raspike_device.c
  CC      ../common/spikeapi/src/raspike_color.c
  CC      ../common/spikeapi/src/raspike_motor.c
  CC      ../common/spikeapi/src/raspike_hub.c
../common/spikeapi/src/raspike_device.c:8:1: warning: missing braces around initializer [-Wmissing-braces]
 static pup_device_t device_table[NUM_DEVICES] = {0};
 ^
../common/spikeapi/src/raspike_device.c:8:1: warning: (near initialization for 'device_table[0]') [-Wmissing-braces]
  CC      ../common/spikeapi/src/raspike_forcesensor.c
  CC      ../common/spikeapi/src/raspike_ultrasonicsensor.c
../../syssvc/tSerialAdapter.c: In function 'serial_opn_por':
../../syssvc/tSerialAdapter.c:67:7: warning: unused variable 'fd' [-Wunused-variable]
   int fd = port_table[portid] = filesys_serial_open(portid);
       ^
  CC      kernel_cfg_asm.S
  CC      kernel_cfg.c
  CC[K]   ../../arch/v850_gcc/prc_support.S
  CC[K]   ../../arch/v850_gcc/prc_sil.S
  CC[K]   ../../target/v850_gcc/target_config.c
  CC[K]   ../../target/v850_gcc/TLSF-2.4.6/src/tlsf.c
  CC[K]   ../../../athrill/apl/src/athrill-syscall.c
  CC[K]   ../../arch/v850_gcc/prc_config.c
  CC[K]   ../../arch/v850_gcc/chip_timer.c
../../target/v850_gcc/target_config.c:15:13: warning: 'target_fput_initialize' declared 'static' but never defined [-Wunused-function]
 static void target_fput_initialize(void);
             ^
../../target/v850_gcc/target_config.c: In function '_kernel_target_exit':
../../target/v850_gcc/target_config.c:56:1: warning: 'noreturn' function does return
 }
 ^
  CC[K]   ../../kernel/startup.c
  CC[K]   ../../kernel/task.c
../workspace/sample_c5_custom/app.cpp: In function 'void test()':
../workspace/sample_c5_custom/app.cpp:19:12: error: 'stoi' is not a member of 'std'
    int x = std::stoi(str); // シミュレータではエラーが発生する。
            ^
../workspace/sample_c5_custom/app.cpp:22:24: error: 'to_string' is not a member of 'std'
     std::string str2 = std::to_string(i); // シミュレータではエラーが発生する。
                        ^
../workspace/sample_c5_custom/app.cpp:19:8: warning: unused variable 'x' [-Wunused-variable]
    int x = std::stoi(str); // シミュレータではエラーが発生する。
        ^
  CC[K]   ../../kernel/taskhook.c
make[2]: *** [Makefile:800: app.o] Error 1
make[2]: *** Waiting for unfinished jobs....
make[1]: *** [Makefile:319: all] Error 2
make: *** [../common/Makefile.workspace:70: img] Error 2
fakemake on ASP3: one or more error occured while build for sample_c5_custom
```

### RaspberryPi OSでビルド
> PRETTY_NAME="Debian GNU/Linux 12 (bookworm)"
NAME="Debian GNU/Linux"
VERSION_ID="12"
VERSION="12 (bookworm)"
VERSION_CODENAME=bookworm
ID=debian
HOME_URL="https://www.debian.org/"
SUPPORT_URL="https://www.debian.org/support"
BUG_REPORT_URL="https://bugs.debian.org/"
Linux etrobo4 6.12.25+rpt-rpi-v8 #1 SMP PREEMPT Debian 1:6.12.25-1+rpt1 (2025-04-30) aarch64 GNU/Linux
```
etrobo@etrobo4:~/RasPike-ART/sdk/workspace $ make img=sample_c5_custom
rm -rf /home/etrobo/RasPike-ART/sdk/workspace/.././OBJ/ ../../libraspike-art/lib/*.a
cd /home/etrobo/RasPike-ART/sdk/workspace/.././OBJ/ && \
ruby /home/etrobo/RasPike-ART/sdk/workspace/../../configure.rb  -T raspi_gcc -A app \
        -a ../workspace/sample_c5_custom \
        -D ../.. \
        -l c++ \
        -m ../common/Makefile.img \
        -o "" \
        -t \
        -d ./dep \
        -C ../common/athrill_common.cdl \
        -U "" && \
make clean
Generating Makefile from ../common/Makefile.img.
make[1]: Entering directory '/home/etrobo/RasPike-ART/sdk/OBJ'
rm -f \#* *~ ./*.o ./dep/*.d  check.timestamp
rm -f asp asp.syms asp.srec asp.bin
rm -f kernel_opt.timestamp   cfg3_out.db
rm -f cfg3_out.syms cfg3_out.srec 
rm -f kernel_cfg.timestamp kernel_cfg.h kernel_cfg.c   cfg2_out.db
rm -f cfg2_out.syms cfg2_out.srec 
rm -f offset.timestamp 
rm -f cfg1_out.syms cfg1_out.srec cfg1_out
rm -f cfg1_out.timestamp cfg1_out.c cfg1_out.db
rm -rf ./gen
rm -f libkernel.a
make[1]: Leaving directory '/home/etrobo/RasPike-ART/sdk/OBJ'
# -S "banner.o syslog.o serial.o logtask.o" 
(cd /home/etrobo/RasPike-ART/sdk/workspace/.././OBJ/ && \
make kernel_cfg.h && \
make -j8 > /dev/null ) && \
cp /home/etrobo/RasPike-ART/sdk/workspace/.././OBJ//asp /home/etrobo/RasPike-ART/sdk/workspace && \
echo "/home/etrobo/RasPike-ART/sdk/workspace/sample_c5_custom" > /home/etrobo/RasPike-ART/sdk/workspace/appdir
make[1]: Entering directory '/home/etrobo/RasPike-ART/sdk/OBJ'
if grep -sq  "tecsgen.cfg" ../workspace/sample_c5_custom/app.cfg ; then \
        cat ../workspace/sample_c5_custom/app.cfg > tmp_app.cfg ; \
else \
        echo "INCLUDE(\"tecsgen.cfg\")" >> tmp_app.cfg; \
        cat ../workspace/sample_c5_custom/app.cfg >> tmp_app.cfg ; \
fi; 
ruby ../../tecsgen/tecsgen.rb ../common/athrill_common.cdl -R -I. -I../../include -I. -I../../include -I../../target/raspi_gcc/drivers -I../../target/raspi_gcc -I../../arch/gcc -I../../target/raspi_gcc/athrill -I../../target/raspi_gcc/athrill/option -I../.. -I../.. -I/home/etrobo/RasPike-ART/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../workspace/sample_c5_custom -I../../target/raspi_gcc/athrill -I../common -I../common/spikeapi -I../common/spikeapi/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers/include/spike/pup -I../../libraspike-art/drivers/include/spike/hub -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include/pbio -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/raspi_gcc/drivers/motor/include -I../../target/raspi_gcc/drivers/uart/include -I../../target/raspi_gcc/drivers/gpio/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/raspi_gcc/drivers/common/include -I../../target/raspi_gcc/drivers/brick/include -I../../target/raspi_gcc/pil/include -I../../target/raspi_gcc/platform/include -I../../target/raspi_gcc/TLSF-2.4.6/include --cpp "gcc -DBUILD_EV3_PLATFORM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/raspi_gcc/drivers -I../../target/raspi_gcc -I../../arch/gcc -I../../target/raspi_gcc/athrill -I../../target/raspi_gcc/athrill/option -I../.. -I../.. -I/home/etrobo/RasPike-ART/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../workspace/sample_c5_custom -I../../target/raspi_gcc/athrill -I../common -I../common/spikeapi -I../common/spikeapi/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers/include/spike/pup -I../../libraspike-art/drivers/include/spike/hub -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include/pbio -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/raspi_gcc/drivers/motor/include -I../../target/raspi_gcc/drivers/uart/include -I../../target/raspi_gcc/drivers/gpio/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/raspi_gcc/drivers/common/include -I../../target/raspi_gcc/drivers/brick/include -I../../target/raspi_gcc/pil/include -I../../target/raspi_gcc/platform/include -I../../target/raspi_gcc/TLSF-2.4.6/include  -D TECSGEN -E" -g ./gen
tecsgen  version 1.9.0  
  CFG[1]  cfg1_out.timestamp
ruby ../../cfg/cfg.rb --pass 1 --kernel asp -I. -I../../include -I. -I../../include -I../../target/raspi_gcc/drivers -I../../target/raspi_gcc -I../../arch/gcc -I../../target/raspi_gcc/athrill -I../../target/raspi_gcc/athrill/option -I../.. -I../.. -I/home/etrobo/RasPike-ART/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../workspace/sample_c5_custom -I../../target/raspi_gcc/athrill -I../common -I../common/spikeapi -I../common/spikeapi/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers/include/spike/pup -I../../libraspike-art/drivers/include/spike/hub -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include/pbio -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/raspi_gcc/drivers/motor/include -I../../target/raspi_gcc/drivers/uart/include -I../../target/raspi_gcc/drivers/gpio/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/raspi_gcc/drivers/common/include -I../../target/raspi_gcc/drivers/brick/include -I../../target/raspi_gcc/pil/include -I../../target/raspi_gcc/platform/include -I../../target/raspi_gcc/TLSF-2.4.6/include --api-table ../../kernel/kernel_api.def --symval-table ../../kernel/kernel_sym.def  --symval-table ../../target/raspi_gcc/target_sym.def \
                                        -M ./dep/cfg1_out_c.d ../../target/raspi_gcc/target_kernel.cfg tmp_app.cfg
tmp_app.cfg:8: warning: `DOMAIN' is not supported
[cfg.rb] Generated cfg1_out.c
  CC      cfg1_out.c
  LINK    cfg1_out
g++ -O2 -Wall -g  -D_GNU_SOURCE -pthread -fsigned-char -std=c99 -DSYSLOG_IMPLEMENT_AS_PRINTF -DMAKE_RASPIKE  -DBUILD_EV3_PLATFORM  -DTOPPERS_SUPPORT_PROTECT -I. -I../../include -I. -I../../include -I../../target/raspi_gcc/drivers -I../../target/raspi_gcc -I../../arch/gcc -I../../target/raspi_gcc/athrill -I../../target/raspi_gcc/athrill/option -I../.. -I../.. -I/home/etrobo/RasPike-ART/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../workspace/sample_c5_custom -I../../target/raspi_gcc/athrill -I../common -I../common/spikeapi -I../common/spikeapi/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers/include/spike/pup -I../../libraspike-art/drivers/include/spike/hub -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include/pbio -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/raspi_gcc/drivers/motor/include -I../../target/raspi_gcc/drivers/uart/include -I../../target/raspi_gcc/drivers/gpio/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/raspi_gcc/drivers/common/include -I../../target/raspi_gcc/drivers/brick/include -I../../target/raspi_gcc/pil/include -I../../target/raspi_gcc/platform/include -I../../target/raspi_gcc/TLSF-2.4.6/include -DUSE_RASPIKE_ART -L .     -o cfg1_out \
                                         ./cfg1_out.o  -lstdc++ -lm -lc -lgcc -std=c++11  
  NM      cfg1_out.syms
  OBJCOPY cfg1_out.srec
  CFG[2]  kernel_cfg.timestamp
ruby ../../cfg/cfg.rb --pass 2 --kernel asp -I. -I../../include -I. -I../../include -I../../target/raspi_gcc/drivers -I../../target/raspi_gcc -I../../arch/gcc -I../../target/raspi_gcc/athrill -I../../target/raspi_gcc/athrill/option -I../.. -I../.. -I/home/etrobo/RasPike-ART/sdk/OBJ/../../../athrill/apl/include -I../common/spikeapi/include -I../common/spikeapi/src -I../workspace/sample_c5_custom -I../../target/raspi_gcc/athrill -I../common -I../common/spikeapi -I../common/spikeapi/include -I../common/library/libcpp-spike/include -I../workspace/sample_c5_custom/app -I../../libraspike-art/drivers/include -I../../libraspike-art/drivers/include/spike -I../../libraspike-art/drivers/include/spike/pup -I../../libraspike-art/drivers/include/spike/hub -I../../libraspike-art/drivers -I../../libraspike-art/external/libpybricks/lib/pbio/include/pbio -I../../libraspike-art/external/libpybricks/lib/pbio/include -I../../libraspike-art/include -I./gen -I../../tecs_kernel -I/tecs -I/tecs/rpc -I../../target/raspi_gcc/drivers/motor/include -I../../target/raspi_gcc/drivers/uart/include -I../../target/raspi_gcc/drivers/gpio/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/include -I../../target/raspi_gcc/drivers/common/virtual-linux-kernel/arch/arm/include -I../../target/raspi_gcc/drivers/common/include -I../../target/raspi_gcc/drivers/brick/include -I../../target/raspi_gcc/pil/include -I../../target/raspi_gcc/platform/include -I../../target/raspi_gcc/TLSF-2.4.6/include -T ../../target/raspi_gcc/target_kernel.trb
[cfg.rb] Generated kernel_cfg.h
[cfg.rb] Generated kernel_cfg.c
make[1]: Leaving directory '/home/etrobo/RasPike-ART/sdk/OBJ'
  CC      ../../target/raspi_gcc/platform/src/spikemain.c
  CC      ../../target/raspi_gcc/drivers/uart/src/athrill_serial_driver.c
  CC      ../../target/raspi_gcc/athrill/athrill-libgcc.c
  CC      ../../target/raspi_gcc/athrill/vdev.c
  CC      ../../target/raspi_gcc/athrill/vdev_com_udp.c
  CC      ../../target/raspi_gcc/athrill/vdev_prot_athrill.c
  CC      ../../target/raspi_gcc/athrill/vdev_com_serial.c
  CC      ../../target/raspi_gcc/athrill/vdev_prot_raspike.c
In file included from ../../target/raspi_gcc/pil/include/driver_interface_lcd.h:10,
                 from ../../target/raspi_gcc/pil/include/platform_interface_layer.h:14,
                 from ../../target/raspi_gcc/platform/src/spikemain.c:10:
../../target/raspi_gcc/pil/include/driver_svc.h: In function ‘cal_svc’:
../../target/raspi_gcc/pil/include/driver_svc.h:27:1: warning: no return statement in function returning non-void [-Wreturn-type]
   27 | }
      | ^
In file included from ../../target/raspi_gcc/pil/include/driver_interface_filesys.h:6,
                 from ../../target/raspi_gcc/athrill/athrill-libgcc.c:7:
../../target/raspi_gcc/pil/include/driver_svc.h: In function ‘cal_svc’:
../../target/raspi_gcc/pil/include/driver_svc.h:27:1: warning: no return statement in function returning non-void [-Wreturn-type]
   27 | }
      | ^
  CC      ../../target/raspi_gcc/athrill/athrill_mpthread.c
../../target/raspi_gcc/athrill/vdev_com_serial.c: In function ‘vdevSerialInit’:
../../target/raspi_gcc/athrill/vdev_com_serial.c:51:13: warning: passing argument 1 of ‘tcgetattr’ makes integer from pointer without a cast [-Wint-conversion]
   51 |   tcgetattr(&tio,0);
      |             ^~~~
      |             |
      |             struct termios *
In file included from ../../target/raspi_gcc/athrill/vdev_com_serial.c:6:
/usr/include/termios.h:66:27: note: expected ‘int’ but argument is of type ‘struct termios *’
   66 | extern int tcgetattr (int __fd, struct termios *__termios_p) __THROW;
      |                       ~~~~^~~~
../../target/raspi_gcc/athrill/vdev_prot_athrill.c: In function ‘vdevProtAthrillInit’:
../../target/raspi_gcc/athrill/vdev_prot_athrill.c:51:18: warning: variable ‘err’ set but not used [-Wunused-but-set-variable]
   51 |   Std_ReturnType err;
      |                  ^~~
../../target/raspi_gcc/athrill/vdev_prot_athrill.c: In function ‘vdevProtAthrillSilCb’:
../../target/raspi_gcc/athrill/vdev_prot_athrill.c:111:53: warning: pointer targets in passing argument 1 of ‘cur_com->send’ differ in signedness [-Wpointer-sign]
  111 |     err = cur_com->send(vdev_control.comm.write_data.buffer, vdev_control.comm.write_data.len);
      |                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
      |                                                     |
      |                                                     char *
../../target/raspi_gcc/athrill/vdev_prot_athrill.c:111:53: note: expected ‘const unsigned char *’ but argument is of type ‘char *’
../../target/raspi_gcc/athrill/vdev_prot_athrill.c: In function ‘vdev_thread_do_proc’:
../../target/raspi_gcc/athrill/vdev_prot_athrill.c:185:61: warning: pointer targets in passing argument 1 of ‘cur_com->receive’ differ in signedness [-Wpointer-sign]
  185 |           err = cur_com->receive(vdev_control.comm.read_data.buffer,sizeof(vdev_control.comm.read_data.buffer));
      |                                  ~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~
      |                                                             |
      |                                                             char *
../../target/raspi_gcc/athrill/vdev_prot_athrill.c:185:61: note: expected ‘unsigned char *’ but argument is of type ‘char *’
  CC      ../../target/raspi_gcc/athrill/udp_comm.c
In file included from ../../target/raspi_gcc/pil/include/driver_interface_lcd.h:7,
                 from ../../target/raspi_gcc/pil/include/platform_interface_layer.h:14,
                 from ../../target/raspi_gcc/drivers/uart/include/uart_dri.h:4,
                 from ../../target/raspi_gcc/athrill/vdev_prot_raspike.c:14:
../../include/itron.h:113: warning: "TRUE" redefined
  113 | #define TRUE            true                    /* 真 */
      | 
In file included from ../../target/raspi_gcc/athrill/vdev.h:4,
                 from ../../target/raspi_gcc/athrill/vdev_prot_raspike.c:6:
../../target/raspi_gcc/athrill/std_types.h:29: note: this is the location of the previous definition
   29 | #define TRUE    (1U)
      | 
../../include/itron.h:114: warning: "FALSE" redefined
  114 | #define FALSE           false                   /* 偽 */
      | 
../../target/raspi_gcc/athrill/std_types.h:33: note: this is the location of the previous definition
   33 | #define FALSE   (0U)
      | 
In file included from ../../target/raspi_gcc/pil/include/driver_interface_lcd.h:10:
../../target/raspi_gcc/pil/include/driver_svc.h: In function ‘cal_svc’:
../../target/raspi_gcc/pil/include/driver_svc.h:27:1: warning: no return statement in function returning non-void [-Wreturn-type]
   27 | }
      | ^
../../target/raspi_gcc/athrill/vdev_prot_raspike.c: In function ‘raspike_uart_wait_mode_change’:
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:95:33: warning: passing argument 1 of ‘sil_rew_mem’ discards ‘volatile’ qualifier from pointer target type [-Wdiscarded-qualifiers]
   95 |     uint32_t data = sil_rew_mem(addr);
      |                                 ^~~~
In file included from ../../target/raspi_gcc/athrill/vdev_prot_raspike.c:15:
../../include/sil.h:215:29: note: expected ‘const uint32_t *’ {aka ‘const unsigned int *’} but argument is of type ‘volatile uint32_t *’ {aka ‘volatile unsigned int *’}
  215 | sil_rew_mem(const uint32_t *mem)
      |             ~~~~~~~~~~~~~~~~^~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c: In function ‘vdevProtRaspikeInit’:
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:118:19: warning: passing argument 1 of ‘SilSetWriteHook’ from incompatible pointer type [-Wincompatible-pointer-types]
  118 |   SilSetWriteHook(vdevProtRaspikeSilCb);
      |                   ^~~~~~~~~~~~~~~~~~~~
      |                   |
      |                   Std_ReturnType (*)(int,  uintptr_t,  void *) {aka unsigned int (*)(int,  long unsigned int,  void *)}
In file included from ../../target/raspi_gcc/athrill/vdev_prot_raspike.c:7:
../../target/raspi_gcc/target_sil.h:122:48: note: expected ‘SilWriteHook’ {aka ‘unsigned int (* const)(int,  long unsigned int,  const void *)’} but argument is of type ‘Std_ReturnType (*)(int,  uintptr_t,  void *)’ {aka ‘unsigned int (*)(int,  long unsigned int,  void *)’}
  122 | extern void SilSetWriteHook(const SilWriteHook hook);
      |                             ~~~~~~~~~~~~~~~~~~~^~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:110:18: warning: variable ‘err’ set but not used [-Wunused-but-set-variable]
  110 |   Std_ReturnType err;
      |                  ^~~
  CC      ../../library/log_output.c
../../target/raspi_gcc/athrill/vdev_prot_raspike.c: In function ‘vdevProtRaspikeSilCb’:
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:301:31: warning: pointer targets in passing argument 1 of ‘cur_com->send’ differ in signedness [-Wpointer-sign]
  301 |           len = cur_com->send(buf,3);
      |                               ^~~
      |                               |
      |                               char *
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:301:31: note: expected ‘const unsigned char *’ but argument is of type ‘char *’
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:309:34: warning: pointer targets in initialization of ‘volatile uint32_t *’ {aka ‘volatile unsigned int *’} from ‘volatile int *’ differ in signedness [-Wpointer-sign]
  309 |           volatile uint32_t *p = (ack_received+send_idx);
      |                                  ^
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:282:13: warning: unused variable ‘cmd’ [-Wunused-variable]
  282 |         int cmd = 1; /* cmd 1 (command) */
      |             ^~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:349:27: warning: pointer targets in passing argument 1 of ‘cur_com->send’ differ in signedness [-Wpointer-sign]
  349 |       len = cur_com->send(makeCommand(127,0,buf),3);
      |                           ^~~~~~~~~~~~~~~~~~~~~~
      |                           |
      |                           char *
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:349:27: note: expected ‘const unsigned char *’ but argument is of type ‘char *’
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:270:9: warning: unused variable ‘num’ [-Wunused-variable]
  270 |     int num = 0;
      |         ^~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:242:7: warning: variable ‘len’ set but not used [-Wunused-but-set-variable]
  242 |   int len;
      |       ^~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c: In function ‘vdev_thread_do_proc’:
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:393:36: warning: pointer targets in passing argument 1 of ‘cur_com->receive’ differ in signedness [-Wpointer-sign]
  393 |             err = cur_com->receive(buf,1);
      |                                    ^~~
      |                                    |
      |                                    char *
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:393:36: note: expected ‘unsigned char *’ but argument is of type ‘char *’
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:404:34: warning: pointer targets in passing argument 1 of ‘cur_com->receive’ differ in signedness [-Wpointer-sign]
  404 |           err = cur_com->receive(buf,RASPIKE_RX_SIZE);
      |                                  ^~~
      |                                  |
      |                                  char *
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:404:34: note: expected ‘unsigned char *’ but argument is of type ‘char *’
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:381:16: warning: unused variable ‘curr_stime’ [-Wunused-variable]
  381 |         uint64 curr_stime;
      |                ^~~~~~~~~~
  CC      ../../library/vasyslog.c
../../target/raspi_gcc/athrill/vdev_prot_raspike.c: At top level:
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:154:15: warning: ‘get_msec_from_previous_time’ defined but not used [-Wunused-function]
  154 | static uint32 get_msec_from_previous_time(const struct timespec *now,const struct timespec *before)
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:147:15: warning: ‘get_time_from_previous_sending’ defined but not used [-Wunused-function]
  147 | static uint32 get_time_from_previous_sending(void)
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:81:13: warning: ‘raspike_uart_wait_mode_change’ defined but not used [-Wunused-function]
   81 | static void raspike_uart_wait_mode_change(uint8_t port,uint8_t mode, uint32_t *check_addr)
      |             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:59:22: warning: ‘common_header’ defined but not used [-Wunused-variable]
   59 | static RaspikeHeader common_header;
      |                      ^~~~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:57:23: warning: ‘send_command’ defined but not used [-Wunused-variable]
   57 | static RaspikeCommand send_command;
      |                       ^~~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:33:13: warning: ‘unlock_task’ defined but not used [-Wunused-function]
   33 | static void unlock_task(void)
      |             ^~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike.c:24:13: warning: ‘lock_task’ defined but not used [-Wunused-function]
   24 | static void lock_task(void)
      |             ^~~~~~~~~
  CC      ../../library/t_perror.c
  CC      ../../library/strerror.c
  CC      ../common/spikeapi/src/spikeapi.c
  CC      ../../target/raspi_gcc/athrill/vdev_com_usb.c
  CC      ../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c
cc1plus: warning: command-line option ‘-std=c99’ is valid for C/ObjC but not for C++
In file included from ../../target/raspi_gcc/pil/include/driver_interface_lcd.h:10,
                 from ../../target/raspi_gcc/pil/include/platform_interface_layer.h:14,
                 from ../common/spikeapi/src/spikeapi.c:8:
../../target/raspi_gcc/pil/include/driver_svc.h: In function ‘cal_svc’:
cc1plus: warning: command-line option ‘-std=c99’ is valid for C/ObjC but not for C++
../../target/raspi_gcc/pil/include/driver_svc.h:27:1: warning: no return statement in function returning non-void [-Wreturn-type]
   27 | }
      | ^
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c: In function ‘vdevProtRaspikeARTInit’:
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c:61:3: warning: statement with no effect [-Wunused-value]
   61 |   err; // for avoid warning
      |   ^~~
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c: In function ‘vdevProtRaspikeSilCb’:
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c:89:65: warning: format ‘%x’ expects argument of type ‘unsigned int’, but argument 2 has type ‘void *’ [-Wformat=]
   89 |     printf("[WARN] RasPike-ART does not support EV3 API(addr = %x)\n",(void*)addr);
      |                                                                ~^     ~~~~~~~~~~~
      |                                                                 |     |
      |                                                                 |     void *
      |                                                                 unsigned int
      |                                                                %p
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c: At top level:
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c:29:13: warning: ‘unlock_task’ defined but not used [-Wunused-function]
   29 | static void unlock_task(void)
      |             ^~~~~~~~~~~
../../target/raspi_gcc/athrill/vdev_prot_raspike_art.c:20:13: warning: ‘lock_task’ defined but not used [-Wunused-function]
   20 | static void lock_task(void)
      |             ^~~~~~~~~
  CC      kernel_cfg.c
  CC[K]   ../../target/raspi_gcc/target_kernel_impl.c
  CC[K]   ../../target/raspi_gcc/target_timer.c
  CC[K]   ../../target/raspi_gcc/TLSF-2.4.6/src/tlsf.c
  CC[K]   ../../target/raspi_gcc/athrill/file.c
../../target/raspi_gcc/target_kernel_impl.c: In function ‘disable_int_all’:
../../target/raspi_gcc/target_kernel_impl.c:230:38: warning: passing argument 3 of ‘sigprocmask’ discards ‘volatile’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  230 |   sigprocmask(SIG_SETMASK, &sigmask, &saved_sigmask);
In file included from ../../target/raspi_gcc/target_kernel_impl.h:58,
                 from ../../kernel/kernel_impl.h:75,
                 from ../../target/raspi_gcc/target_kernel_impl.c:45:
/usr/include/signal.h:233:46: note: expected ‘sigset_t * restrict’ but argument is of type ‘volatile sigset_t *’
  233 |                         sigset_t *__restrict __oset) __THROW;
      |                         ~~~~~~~~~~~~~~~~~~~~~^~~~~~
../../target/raspi_gcc/target_kernel_impl.c: In function ‘enable_int_all’:
../../target/raspi_gcc/target_kernel_impl.c:238:28: warning: passing argument 2 of ‘sigprocmask’ discards ‘volatile’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  238 |   sigprocmask(SIG_SETMASK, &saved_sigmask, NULL);
/usr/include/signal.h:232:63: note: expected ‘const sigset_t * restrict’ but argument is of type ‘volatile sigset_t *’
  232 | extern int sigprocmask (int __how, const sigset_t *__restrict __set,
      |                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~
  CC[K]   ../../target/raspi_gcc/athrill/token.c
  CC[K]   ../../target/raspi_gcc/athrill/option.c
  CC[K]   ../../target/raspi_gcc/athrill/devconfig.c
  CC[K]   ../../target/raspi_gcc/main.c
  CC[K]   ../../target/raspi_gcc/target_sil.c
../../target/raspi_gcc/athrill/devconfig.c: In function ‘cpuemu_env_parse_devcfg_string’:
../../target/raspi_gcc/athrill/devconfig.c:94:20: warning: implicit declaration of function ‘getenv’ [-Wimplicit-function-declaration]
   94 |         char *ep = getenv(env_name);
      |                    ^~~~~~
../../target/raspi_gcc/athrill/devconfig.c:12:1: note: ‘getenv’ is defined in header ‘<stdlib.h>’; did you forget to ‘#include <stdlib.h>’?
   11 | #include <string.h>
  +++ |+#include <stdlib.h>
   12 | #include "token.h"
../../target/raspi_gcc/athrill/devconfig.c:94:20: warning: initialization of ‘char *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
   94 |         char *ep = getenv(env_name);
      |                    ^~~~~~
  CC[K]   ../../kernel/startup.c
../../target/raspi_gcc/main.c: In function ‘main’:
../../target/raspi_gcc/main.c:36:15: warning: unused variable ‘ret’ [-Wunused-variable]
   36 |           int ret = (*deviceStartupCb)();
      |               ^~~
../../target/raspi_gcc/main.c:19:33: warning: unused variable ‘sigact’ [-Wunused-variable]
   19 |         struct sigaction        sigact;
      |                                 ^~~~~~
../../target/raspi_gcc/main.c:18:41: warning: unused variable ‘ss’ [-Wunused-variable]
   18 |         stack_t                         ss;
      |                                         ^~
../../target/raspi_gcc/main.c:17:41: warning: unused variable ‘sigmask’ [-Wunused-variable]
   17 |         sigset_t                        sigmask;
      |                                         ^~~~~~~
  CC[K]   ../../kernel/task.c
  CC[K]   ../../kernel/taskhook.c
  CC[K]   ../../kernel/wait.c
  CC[K]   ../../kernel/time_event.c
  CC[K]   ../../kernel/task_manage.c
  CC[K]   ../../kernel/task_refer.c
  CC[K]   ../../kernel/task_sync.c
  CC[K]   ../../kernel/task_term.c
  CC[K]   ../../kernel/semaphore.c
  CC[K]   ../../kernel/eventflag.c
  CC[K]   ../../kernel/dataqueue.c
../workspace/sample_c5_custom/app.cpp: In function ‘void test()’:
../workspace/sample_c5_custom/app.cpp:19:15: warning: unused variable ‘x’ [-Wunused-variable]
   19 |           int x = std::stoi(str); // シミュレータではエラーが発生する。
      |               ^
  CC[K]   ../../kernel/pridataq.c
  CC[K]   ../../kernel/mutex.c
  CC[K]   ../../kernel/mempfix.c
  CC[K]   ../../kernel/time_manage.c
  CC[K]   ../../kernel/cyclic.c
  CC[K]   ../../kernel/alarm.c
  CC[K]   ../../kernel/sys_manage.c
  CC[K]   ../../kernel/interrupt.c
  CC[K]   ../../kernel/exception.c
make[3]: warning: jobserver unavailable: using -j1.  Add '+' to parent make rule.
Makefile:36: warning: overriding recipe for target '../../lib/libraspike-art.a'
../Makefile.common:29: warning: ignoring old recipe for target '../../lib/libraspike-art.a'
  RM      libkernel.a
  AR      libkernel.a
  RANLIB  libkernel.a
```
