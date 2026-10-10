
void __fastcall FUN_0045b6a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *apuStack_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(byte *)((int)param_1 + 0x126) & 1) == 0) {
    if (((*(byte *)((int)param_1 + 0x126) & 1) == 0) &&
       ((*(byte *)((int)param_1 + 0x15b) & 0x10) == 0)) {
      iVar3 = FUN_004c71a0();
      if (iVar3 == 0) {
        puVar4 = &uStack_80;
        (**(code **)(*param_1 + 0x118))();
      }
      else {
        piVar1 = (int *)param_1[0x50];
        uVar2 = piVar1[1] * 2;
        if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
          iVar3 = *piVar1;
        }
        else {
          iVar3 = FUN_00549470(piVar1 + 1);
        }
        if (iVar3 == 0) {
          puVar4 = (undefined4 *)0xffffffff;
        }
        else {
          puVar4 = (undefined4 *)FUN_0053cb40(s__coll_0072c884);
          if (puVar4 == (undefined4 *)0xffffffff) {
            puVar4 = (undefined4 *)0x0;
          }
        }
        (**(code **)(*param_1 + 0x114))(&uStack_80);
      }
      uStack_3c = uStack_7c;
      uStack_40 = uStack_80;
      uStack_30 = uStack_70;
      uStack_38 = uStack_78;
      uStack_34 = uStack_74;
      uStack_24 = uStack_64;
      uStack_2c = uStack_6c;
      uStack_28 = uStack_68;
      uStack_18 = uStack_58;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      uStack_c = uStack_4c;
      uStack_14 = uStack_54;
      uStack_10 = uStack_50;
      apuStack_48[0] = puVar4;
      FUN_0064d6d0();
      FUN_005780e0(param_1[2],param_1[3],&stack0xffffff78,apuStack_48);
      FUN_004d2210();
      FUN_005785b0();
    }
    return;
  }
  return;
}

