
void __thiscall FUN_006bb1e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [48];
  
  if (DAT_00815cb4 != 0) {
    FUN_0066dac0();
    if (DAT_00815ca0 != 0) {
      FUN_00669cf0(param_1 + 0x90,0xff00ff00);
    }
    if (DAT_00815c98 != 0) {
      param_1 = param_1 + 0x24;
      puVar3 = auStack_30;
      FUN_006ba140(puVar3,param_1,0xff00ff00);
      uVar1 = FUN_0041b9f0(puVar3,param_1);
      FUN_0066a800(uVar1);
    }
    if ((DAT_00815c94 != 0) || (DAT_00815c9c != 0)) {
      uVar1 = FUN_006bae20(param_2);
      FUN_0066d9c0(uVar1);
      if (DAT_00815c94 != 0) {
        FUN_0066ab60(0x40400000);
      }
      if (DAT_00815c9c != 0) {
        uVar4 = 0xff0000ff;
        uVar1 = FUN_00401f00(0x3f000000,0x3f000000,0x3f000000);
        uVar2 = FUN_00401f00(0xbf000000,0xbf000000,0xbf000000);
        uVar1 = FUN_004ace90(uVar2,uVar1);
        FUN_00669cf0(uVar1,uVar4);
      }
      FUN_0066dac0();
    }
  }
  return;
}

