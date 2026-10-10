
void FUN_0048b8e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 local_80 [128];
  
  if ((DAT_0075d338 == 0) || ((param_3 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x80) = 0x11;
    *(uint *)(iVar1 + 0x84) = param_3 | 1;
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_00728244);
    uVar2 = param_3 & 0xffffffdf | 0x10;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,local_80);
      *(uint *)(iVar1 + 0x84) = uVar2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xff;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_00728240);
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,local_80);
      *(uint *)(iVar1 + 0x84) = uVar2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xff;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_0072823c);
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,local_80);
      *(uint *)(iVar1 + 0x84) = uVar2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xff;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_00728238);
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,local_80);
      *(uint *)(iVar1 + 0x84) = uVar2;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xff;
    }
  }
  return;
}

