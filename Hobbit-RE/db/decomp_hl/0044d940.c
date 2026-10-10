
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044d940(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float10 fVar9;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfc40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Conversation_CheckForPart_00724a68);
  local_4 = 0;
  local_4c = FUN_0054c5c0(0x1c,s_C__projects_meridian_Support_Obj_007248b0,0x30b);
  fVar1 = _DAT_006ec00c;
  *(undefined4 *)(param_1 + 0x5950) = 0;
  *(undefined4 *)(param_1 + 0x5954) = 0;
  if (*(float *)(param_1 + 0x5940) <= fVar1) {
    local_5c = *(float *)(param_1 + 0x5940);
  }
  else {
    local_5c = 3.4028235e+38;
  }
  if (param_2 != -1) {
    FUN_00588ff0(param_2);
    iVar6 = FUN_00589010(param_2,&local_48);
    uVar4 = local_48;
    uVar5 = local_44;
    while (iVar6 != 0) {
      local_48 = uVar4;
      local_44 = uVar5;
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar6 = FUN_00406ce0(uVar4,uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar6 == -1) {
        FUN_00649720();
      }
      else {
        uVar3 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
        piVar8 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
        FUN_00649720();
        if (((piVar8 != (int *)0x0) && ((char)piVar8[0x1f] == '\x1c')) &&
           ((iVar6 = FUN_004a1210(), iVar6 != 0 || (iVar6 = FUN_004a1240(), iVar6 != 0)))) {
          pfVar7 = (float *)(**(code **)(*piVar8 + 0x28))();
          fStack_24 = *pfVar7;
          fStack_20 = pfVar7[1];
          fStack_1c = pfVar7[2];
          FUN_00401f00(fStack_24 - *(float *)(param_1 + 0x14),fStack_20 - *(float *)(param_1 + 0x18)
                       ,fStack_1c - *(float *)(param_1 + 0x1c));
          fVar9 = (float10)FUN_00402000();
          fVar1 = (float)fVar9;
          fVar2 = *(float *)(*(int *)(param_1 + 0x450) + 0x17c);
          fVar2 = fVar2 * fVar2;
          if ((fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) &&
             (fVar1 < local_5c != (NAN(fVar1) || NAN(local_5c)))) {
            fStack_30 = 0.0;
            fStack_2c = 0.0;
            fStack_28 = 1.0;
            fVar9 = (float10)(**(code **)(*piVar8 + 0x10c))();
            fStack_50 = (float)fVar9;
            FUN_0064c8e0(0,&fStack_54,&fStack_58);
            fVar2 = fStack_2c * fStack_54;
            fStack_2c = fStack_30 * fStack_54 + fStack_2c * fStack_58;
            fStack_30 = fStack_58 * fStack_30 - fVar2;
            FUN_004286f0(0);
            FUN_00428740(fStack_50);
            if ((DAT_006e92e4 <
                 (*(float *)(param_1 + 0x14) - fStack_24) * fStack_30 +
                 fStack_2c * (*(float *)(param_1 + 0x18) - fStack_20) +
                 fStack_28 * (*(float *)(param_1 + 0x1c) - fStack_1c)) ||
               (iVar6 = FUN_00598b70(), iVar6 != 0)) {
              *(undefined4 *)(param_1 + 0x5950) = local_48;
              *(undefined4 *)(param_1 + 0x5938) = local_48;
              *(undefined4 *)(param_1 + 0x5954) = local_44;
              *(undefined4 *)(param_1 + 0x593c) = local_44;
              *(float *)(param_1 + 0x5940) = fVar1;
              local_5c = fVar1;
            }
          }
        }
      }
      iVar6 = FUN_00589010(param_2,&local_48);
      uVar4 = local_48;
      uVar5 = local_44;
    }
    FUN_0054c880(local_4c);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

