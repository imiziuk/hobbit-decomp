
void FUN_004acff0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  if ((DAT_0075d338 == 0) || ((param_3 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,param_2);
    *(undefined4 *)(iVar1 + 0x80) = 9;
    *(undefined4 *)(iVar1 + 0x88) = *param_4;
    *(undefined4 *)(iVar1 + 0x8c) = param_4[1];
    *(undefined4 *)(iVar1 + 0x90) = param_4[2];
    *(undefined4 *)(iVar1 + 0x94) = param_4[3];
    *(undefined4 *)(iVar1 + 0x98) = param_4[4];
    *(undefined4 *)(iVar1 + 0x9c) = param_4[5];
    *(undefined4 *)(iVar1 + 0xa0) = *param_5;
    *(undefined4 *)(iVar1 + 0xa4) = param_5[1];
    *(undefined4 *)(iVar1 + 0xa8) = param_5[2];
    FUN_004357e0(param_5 + 3);
    *(uint *)(iVar1 + 0x84) = param_3 | 1;
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_007278f4);
    local_8c = 0x7f7fffff;
    local_88 = 0x7f7fffff;
    local_84 = 0x7f7fffff;
    FUN_004357e0(param_4);
    param_3 = param_3 & 0xffffffdf;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,local_80);
      *(undefined4 *)(iVar1 + 0x80) = 8;
      *(undefined4 *)(iVar1 + 0xc0) = local_9c;
      *(undefined4 *)(iVar1 + 0xc4) = local_98;
      *(undefined4 *)(iVar1 + 200) = local_94;
      FUN_004357e0(&local_8c);
      *(uint *)(iVar1 + 0x84) = param_3 | 0x11;
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,local_80);
      FUN_00647dc0(iVar1,&DAT_00724e78);
      *(undefined4 *)(iVar1 + 0x80) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = local_9c;
      uVar2 = param_3 | 0x10;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      *(uint *)(iVar1 + 0x84) = uVar2;
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,local_80);
      FUN_00647dc0(iVar1,&DAT_00724e74);
      *(undefined4 *)(iVar1 + 0x80) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = local_98;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      *(uint *)(iVar1 + 0x84) = uVar2;
      iVar1 = FUN_00425010();
      FUN_00647d10(iVar1,local_80);
      FUN_00647dc0(iVar1,&DAT_00724e70);
      *(undefined4 *)(iVar1 + 0x80) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = local_94;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      *(uint *)(iVar1 + 0x84) = uVar2;
    }
    FUN_00647d10(local_80,param_2);
    FUN_00647dc0(local_80,&DAT_007278ec);
    FUN_004357e0(param_5 + 3);
    FUN_00480ff0(param_1,local_80,param_3 | 0x10);
  }
  return;
}

