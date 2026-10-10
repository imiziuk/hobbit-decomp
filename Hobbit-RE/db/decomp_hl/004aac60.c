
undefined8 __fastcall FUN_004aac60(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
  uStack_c = *puVar2;
  uStack_8 = puVar2[1];
  uStack_4 = puVar2[2];
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xbf;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = FUN_0054c5c0(0x26,s_C__projects_meridian_Support_Obj_0072b7a4,0x700);
  sVar1 = FUN_0054c7c0();
  do {
    if (sVar1 < 0) {
LAB_004aad6f:
      FUN_0054c880(uVar3);
      return CONCAT44(uVar5,uVar6);
    }
    if (sVar1 == -1) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + sVar1 * 0x14);
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
      }
    }
    uVar6 = *(undefined4 *)(uVar7 + 8);
    uVar5 = *(undefined4 *)(uVar7 + 0xc);
    iVar4 = FUN_004e7c90(&uStack_c);
    if (iVar4 == 0) {
      uVar6 = 0;
      *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xf7;
      uVar5 = 0;
    }
    else {
      fVar8 = (float10)FUN_004e7ba0(&uStack_c);
      if ((float10)DAT_006e92e4 <= fVar8) {
        if (fVar8 < (float10)(float)param_1[0x15] - (float10)(float)param_1[0x12] !=
            (fVar8 == (float10)(float)param_1[0x15] - (float10)(float)param_1[0x12])) {
          *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 8;
          goto LAB_004aad6f;
        }
        if ((float10)(float)param_1[0x15] <= fVar8) {
          *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 0x40;
        }
      }
    }
    sVar1 = FUN_0054c7c0();
  } while( true );
}

