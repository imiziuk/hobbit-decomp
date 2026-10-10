
void FUN_00480ff0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_0075d338 == 0) || ((param_3 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x80) = 8;
    *(undefined4 *)(iVar1 + 0xc0) = param_4;
    *(undefined4 *)(iVar1 + 0xc4) = param_5;
    *(undefined4 *)(iVar1 + 200) = param_6;
    *(undefined4 *)(iVar1 + 0xcc) = param_7;
    *(undefined4 *)(iVar1 + 0xd0) = param_8;
    *(undefined4 *)(iVar1 + 0xd4) = param_9;
    *(uint *)(iVar1 + 0x84) = param_3 | 1;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    FUN_00647dc0(iVar1,&DAT_00724e78);
    *(undefined4 *)(iVar1 + 0xf8) = param_4;
    uVar2 = param_3 & 0xffffffdf | 0x10;
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xfc) = param_7;
    *(uint *)(iVar1 + 0x84) = uVar2;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    FUN_00647dc0(iVar1,&DAT_00724e74);
    *(undefined4 *)(iVar1 + 0xfc) = param_8;
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = param_5;
    *(uint *)(iVar1 + 0x84) = uVar2;
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    FUN_00647dc0(iVar1,&DAT_00724e70);
    *(uint *)(iVar1 + 0x84) = uVar2;
    *(undefined4 *)(iVar1 + 0x80) = 2;
    *(undefined4 *)(iVar1 + 0xf8) = param_6;
    *(undefined4 *)(iVar1 + 0xfc) = param_9;
  }
  return;
}

