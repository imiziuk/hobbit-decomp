
void FUN_00463d50(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_80 [128];
  
  if ((DAT_0075d338 == 0) || ((param_3 & 0x20) != 0)) {
    iVar3 = FUN_00425010();
    FUN_00647d10(iVar3,param_2);
    *(undefined4 *)(iVar3 + 0x80) = 0xb;
    *(undefined4 *)(iVar3 + 0xd8) = *param_4;
    *(undefined4 *)(iVar3 + 0xdc) = param_4[1];
    *(undefined4 *)(iVar3 + 0xe0) = param_4[2];
    *(undefined4 *)(iVar3 + 0xe4) = *param_5;
    *(undefined4 *)(iVar3 + 0xe8) = param_5[1];
    *(undefined4 *)(iVar3 + 0xec) = param_5[2];
    *(uint *)(iVar3 + 0x84) = param_3 | 1;
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,s__Pitch_007207e8);
    uVar1 = *param_4;
    uVar2 = *param_5;
    uVar4 = param_3 & 0xffffffdf | 0x10;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 10;
      FUN_00647d10(iVar3,local_80);
      *(uint *)(iVar3 + 0x84) = uVar4;
      *(undefined4 *)(iVar3 + 0xf8) = uVar1;
      *(undefined4 *)(iVar3 + 0xfc) = uVar2;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_007207e0);
    uVar1 = param_5[1];
    uVar2 = param_4[1];
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 10;
      FUN_00647d10(iVar3,local_80);
      *(uint *)(iVar3 + 0x84) = uVar4;
      *(undefined4 *)(iVar3 + 0xf8) = uVar2;
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,s__Roll_007207d8);
    uVar1 = param_5[2];
    uVar2 = param_4[2];
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 10;
      FUN_00647d10(iVar3,local_80);
      *(uint *)(iVar3 + 0x84) = uVar4;
      *(undefined4 *)(iVar3 + 0xf8) = uVar2;
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
  }
  return;
}

