# sample_c5_custom.asp
etロボコン2025 2025年度技術教育1資料のsample05を改修したプログラムです。シミュレータでエラーが発生します。

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
