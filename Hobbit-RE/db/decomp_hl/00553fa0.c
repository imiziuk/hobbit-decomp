
void __thiscall
FUN_00553fa0(int param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9be8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_material_mgr__ActivateMaterialPa_0073d438);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  local_4 = 0;
  iVar5 = *(int *)((*(uint *)(param_1 + 0x58) & (uint)param_2) * 0xa04 +
                   *(int *)(*(int *)(param_1 + 100) + 8 +
                           ((int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) + 0x104);
  if ((-1 < iVar5) && (iVar5 < DAT_0073da10)) {
    fVar7 = (float10)FUN_00557bb0();
    uVar3 = *(uint *)(param_1 + 0x58) & (uint)param_2;
    iVar5 = (int)param_2 >> (*(byte *)(param_1 + 0x5e) & 0x1f);
    param_2 = (float)(fVar7 + (float10)param_4);
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 100) + 8 + iVar5 * 0x18) + 0x118 + uVar3 * 0xa04) & 4
        ) != 0) {
      param_2 = (float)(fVar7 + (float10)param_4) + param_5;
    }
    iVar5 = FUN_00558a10(param_2);
    if (((*(int *)(param_1 + 0x2c) == 0) || (iVar5 != 0)) && (*(int *)(param_1 + 0x34) != 0)) {
      *(uint *)(param_1 + 0x38) = uVar1;
      *(undefined4 *)(param_1 + 0x3c) = param_3;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (*(int *)(param_1 + 0xf4) == 2) {
      uVar6 = 0x10101010;
      uVar4 = FUN_00553c50(uVar1);
      switch(uVar4) {
      case 1:
        uVar6 = 0x10101010;
        break;
      case 2:
        uVar6 = 0x10001700;
        break;
      case 3:
        uVar6 = 0x10000017;
        break;
      case 4:
        uVar6 = 0x10001715;
        break;
      case 5:
        uVar6 = 0x10171500;
      }
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x3c,uVar6);
      FUN_00554860(0,&DAT_0073d434,&DAT_0075b6e0);
      FUN_00554f00(1);
      FUN_00554fb0(&PTR_LAB_00632b64_2_0073d430,0);
    }
    else {
      cVar2 = FUN_00555ea0();
      if (cVar2 == '\0') {
        (**(code **)(DAT_00771ec0 +
                    *(int *)(*(int *)(*(int *)(param_1 + 100) + 8 +
                                     ((int)uVar1 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
                             0x104 + (*(uint *)(param_1 + 0x58) & uVar1) * 0xa04) * 0x24))
                  ((*(uint *)(param_1 + 0x58) & uVar1) * 0xa04 +
                   *(int *)(*(int *)(param_1 + 100) + 8 +
                           ((int)uVar1 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18),param_3);
        FUN_00554210((*(uint *)(param_1 + 0x58) & uVar1) * 0xa04 +
                     *(int *)(*(int *)(param_1 + 100) + 8 +
                             ((int)uVar1 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18),param_3);
      }
      else {
        FUN_00554860(0,&DAT_0072ed7c,&DAT_0075b6e0);
        FUN_00554f00(1);
        FUN_00554fb0(&DAT_0072ed84,0);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

