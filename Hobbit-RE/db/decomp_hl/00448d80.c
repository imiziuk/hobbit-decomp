
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00448d80(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  float fVar13;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  int local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [48];
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = (int *)FUN_004021c0(param_1[0x32],param_1[0x33]);
  param_1[0x164c] = param_1[0x164c] & 0xfffffffe;
  iVar3 = FUN_0041fce0(0x43fa0000);
  if (iVar3 != 0) {
LAB_00449076:
    FUN_004ba6c0(0);
    FUN_00448560();
    param_1[0x164c] = param_1[0x164c] & 0xfffffffd;
    return;
  }
  if (param_1[0x100] != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724540,0x182);
    return;
  }
  iVar3 = param_1[0x158];
  if (*(int *)(iVar3 + 8) != -1) {
    pcVar11 = s_PUSH_BLOCK_INTO_IDLE_007205b4;
    FUN_004258a0(s_PUSH_BLOCK_INTO_IDLE_007205b4);
    iVar4 = FUN_0053cc70(pcVar11);
    if (((*(int *)(iVar3 + 8) == iVar4) && (param_1[0x14d] < 1)) &&
       (local_8c = (float)(param_1[0x14b] + -2),
       (float)(int)local_8c < (float)param_1[0x14c] ==
       ((float)(int)local_8c == (float)param_1[0x14c]))) {
      pfVar5 = (float *)(**(code **)(*param_1 + 0x28))();
      fStack_88 = *pfVar5;
      fStack_84 = pfVar5[1];
      fStack_80 = pfVar5[2];
      pfVar5 = (float *)(**(code **)(*piVar2 + 0x28))();
      fStack_58 = *pfVar5;
      fStack_54 = pfVar5[1];
      fStack_50 = pfVar5[2];
      local_8c = fStack_84;
      FUN_00449810(&fStack_70,0x42200000);
      fStack_6c = local_8c;
      fStack_94 = *(float *)(param_1[0x114] + 0x74) * _DAT_006e936c;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
      local_74 = puVar6[2];
      fStack_78 = fStack_94 + (float)puVar6[1];
      uStack_7c = *puVar6;
      fStack_4c = fStack_70;
      fStack_48 = *(float *)(param_1[0x114] + 0x74) * _DAT_006e936c + fStack_6c;
      fStack_44 = fStack_68;
      FUN_005798f0(5);
      FUN_00579460(param_1[2],param_1[3],&uStack_7c,&fStack_4c,
                   *(undefined4 *)(param_1[0x114] + 0x70),3);
      iVar3 = FUN_00577e70();
      if ((iVar3 != 0) && (iVar3 = 0, 0 < DAT_00773970)) {
        piVar2 = &DAT_00773520;
        do {
          if ((*piVar2 != param_1[0x32]) || (piVar2[1] != param_1[0x33])) goto LAB_00449076;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 0x12;
        } while (iVar3 < DAT_00773970);
      }
      fStack_5c = (float)param_1[0x248] * _DAT_006ec0e8;
      fStack_64 = (fStack_70 - fStack_88) * fStack_5c;
      fStack_60 = (fStack_6c - fStack_84) * fStack_5c;
      fStack_5c = (fStack_68 - fStack_80) * fStack_5c;
      FUN_00469060(&fStack_88,&fStack_64,0,*(undefined4 *)(param_1[0x114] + 0x58),0,1,1);
      (**(code **)(*param_1 + 0x14))(&fStack_88,0);
      fVar13 = fStack_60 - fStack_90;
      fStack_98 = fStack_58 - fStack_88;
      fVar1 = DAT_006e92e8 /
              SQRT((fStack_5c - local_8c) * (fStack_5c - local_8c) +
                   fStack_98 * fStack_98 + fVar13 * fVar13);
      iVar3 = FUN_0064cf30(fVar1);
      if (iVar3 == 0) {
        fVar13 = 0.0;
        fStack_98 = 0.0;
      }
      else {
        fVar13 = fVar13 * fVar1;
        fStack_98 = fStack_98 * fVar1;
      }
      fVar8 = (float10)FUN_0064ca10(fVar13,fStack_98);
      param_1[0x1eb] = (int)(float)fVar8;
      param_1[0x1ec] = 0x3fc90fdb;
      goto LAB_00449769;
    }
  }
  iVar3 = param_1[0x158];
  if (*(int *)(iVar3 + 8) == -1) {
LAB_00449153:
    if ((param_1[0x1be] != 0) &&
       ((((param_1[0x1c0] == 0 && (param_1[0x1c1] == 0)) && (param_1[0x1c2] == 0)) &&
        (param_1[0x1c3] == 0)))) {
      param_1[0x184] = 0;
    }
    iVar3 = param_1[0x158];
    if (*(int *)(iVar3 + 8) != -1) {
      pcVar11 = s_PUSH_BLOCK_FLIP_00720334;
      FUN_004258a0(s_PUSH_BLOCK_FLIP_00720334);
      iVar4 = FUN_0053cc70(pcVar11);
      if (*(int *)(iVar3 + 8) == iVar4) {
        FUN_00540e90(s_WEAPON_00720f68,local_40,0);
        local_74 = local_8;
        param_1[0x298] = local_10;
        param_1[0x29a] = local_8;
        param_1[0x299] = local_c;
        param_1[0x299] = 0;
        if ((0 < param_1[0x14d]) ||
           (local_8c = (float)(param_1[0x14b] + -2),
           (float)(int)local_8c < (float)param_1[0x14c] !=
           ((float)(int)local_8c == (float)param_1[0x14c]))) {
          FUN_00549470(param_1 + 0x115);
          FUN_00549580(param_1 + 0x115);
          uVar12 = 0x3e000000;
          uVar10 = 1;
          uVar9 = 0;
          uVar7 = FUN_0053cc70(s_PUSH_BLOCK_IDLE_007205cc);
          FUN_00540840(uVar7,uVar9,uVar10,uVar12);
          param_1[0x1e6] = 0;
          param_1[0x1e7] = 0;
        }
        goto LAB_00449769;
      }
    }
    if (((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) !=
         ((float)param_1[0x184] == DAT_006e92e4)) && (param_1[400] == 0)) {
      iVar3 = param_1[0x158];
      if (*(int *)(iVar3 + 8) == -1) {
LAB_004492c9:
        iVar3 = param_1[0x158];
        if (*(int *)(iVar3 + 8) != -1) {
          pcVar11 = s_PUSH_BLOCK_BACKWARD_00720368;
          FUN_004258a0(s_PUSH_BLOCK_BACKWARD_00720368);
          iVar4 = FUN_0053cc70(pcVar11);
          if (*(int *)(iVar3 + 8) == iVar4) goto LAB_00449332;
        }
        iVar3 = param_1[0x158];
        if (*(int *)(iVar3 + 8) != -1) {
          pcVar11 = s_PUSH_BLOCK_LEFT_00720358;
          FUN_004258a0(s_PUSH_BLOCK_LEFT_00720358);
          iVar4 = FUN_0053cc70(pcVar11);
          if (*(int *)(iVar3 + 8) == iVar4) goto LAB_00449332;
        }
        iVar3 = param_1[0x158];
        if (*(int *)(iVar3 + 8) != -1) {
          pcVar11 = s_PUSH_BLOCK_RIGHT_00720344;
          FUN_004258a0(s_PUSH_BLOCK_RIGHT_00720344);
          iVar4 = FUN_0053cc70(pcVar11);
          if (*(int *)(iVar3 + 8) == iVar4) goto LAB_00449332;
        }
      }
      else {
        pcVar11 = s_PUSH_BLOCK_FORWARD_0072037c;
        FUN_004258a0(s_PUSH_BLOCK_FORWARD_0072037c);
        iVar4 = FUN_0053cc70(pcVar11);
        if (*(int *)(iVar3 + 8) != iVar4) goto LAB_004492c9;
LAB_00449332:
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar12 = 0x3e99999a;
        uVar10 = 1;
        uVar9 = 0;
        uVar7 = FUN_0053cc70(s_PUSH_BLOCK_IDLE_007205cc);
        FUN_00540840(uVar7,uVar9,uVar10,uVar12);
        param_1[0x1e6] = 0;
        param_1[0x1e7] = 0;
        param_1[0x164c] = param_1[0x164c] | 1;
      }
      FUN_00448c70(1);
      goto LAB_00449769;
    }
    iVar3 = FUN_004bebf0();
    if ((iVar3 == 0) && (iVar3 = FUN_004bec00(2), iVar3 == 0)) {
      local_8c = (float)piVar2[0x99];
      pfVar5 = (float *)(**(code **)(*piVar2 + 0x28))();
      fStack_90 = pfVar5[2] - (float)piVar2[0x62];
      fStack_94 = pfVar5[1] - (float)piVar2[0x61];
      fStack_98 = *pfVar5 - (float)piVar2[0x60];
      fVar13 = DAT_006e92e8 /
               SQRT(fStack_90 * fStack_90 + fStack_94 * fStack_94 + fStack_98 * fStack_98);
      iVar3 = FUN_0064cf30(fVar13);
      if (iVar3 == 0) {
        fStack_98 = 0.0;
        fStack_94 = 0.0;
        fStack_90 = 0.0;
      }
      else {
        fVar13 = fVar13 * local_8c;
        fStack_98 = fStack_98 * fVar13;
        fStack_94 = fStack_94 * fVar13;
        fStack_90 = fStack_90 * fVar13;
      }
      iVar3 = FUN_004bf9d0(&uStack_7c,&fStack_98,1);
      if (iVar3 == 0) {
        param_1[0x164c] = param_1[0x164c] & 0xfffffffe;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar12 = 0x3e99999a;
        uVar10 = 1;
        uVar9 = 0;
        uVar7 = FUN_0053cc70(s_PUSH_BLOCK_IDLE_007205cc);
        FUN_00540840(uVar7,uVar9,uVar10,uVar12);
        param_1[0x1e6] = 0;
        param_1[0x1e7] = 0;
      }
      else {
        (**(code **)(*piVar2 + 300))(&uStack_7c);
        FUN_004bd4c0(2);
        FUN_00448560();
      }
      goto LAB_00449769;
    }
    iVar3 = FUN_004bec00(2);
    if (iVar3 != 0) goto LAB_00449769;
    iVar3 = param_1[0x158];
    if (*(int *)(iVar3 + 8) != -1) {
      pcVar11 = s_PUSH_BLOCK_FLIP_00720334;
      FUN_004258a0(s_PUSH_BLOCK_FLIP_00720334);
      iVar4 = FUN_0053cc70(pcVar11);
      if (*(int *)(iVar3 + 8) == iVar4) goto LAB_00449769;
    }
    param_1[0x1e6] = 0x3f800000;
    fVar8 = (float10)(**(code **)(*param_1 + 0x10c))();
    fStack_78 = (float)fVar8;
    uStack_7c = 0;
    local_74 = 0;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = 1.0;
    FUN_00429030(&uStack_7c);
    param_1[0x164c] = param_1[0x164c] | 1;
    fVar13 = fStack_88 * (float)param_1[0x18c] +
             fStack_84 * (float)param_1[0x18d] + fStack_80 * (float)param_1[0x18e];
    if (fVar13 < _DAT_006e99f4) {
      if (fVar13 < _DAT_006e99f0 != (fVar13 == _DAT_006e99f0)) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar11 = s_PUSH_BLOCK_BACKWARD_00720368;
        goto LAB_004496ef;
      }
      fVar13 = (fStack_84 * DAT_006e92e4 - fStack_80) * (float)param_1[0x18c] +
               (fStack_80 * DAT_006e92e4 - fStack_88 * DAT_006e92e4) * (float)param_1[0x18d] +
               (fStack_88 - fStack_84 * DAT_006e92e4) * (float)param_1[0x18e];
      if (_DAT_006e99f4 <= fVar13) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar11 = s_PUSH_BLOCK_RIGHT_00720344;
        goto LAB_004496ef;
      }
      if (fVar13 < _DAT_006e99f0 != (fVar13 == _DAT_006e99f0)) {
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        pcVar11 = s_PUSH_BLOCK_LEFT_00720358;
        goto LAB_004496ef;
      }
    }
    else {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar11 = s_PUSH_BLOCK_FORWARD_0072037c;
LAB_004496ef:
      uVar12 = 0x3eaa7efa;
      uVar10 = 1;
      uVar9 = 0;
      uVar7 = FUN_0053cc70(pcVar11);
      FUN_00540840(uVar7,uVar9,uVar10,uVar12);
    }
    if ((param_1[400] == 0) || (FUN_004bd4f0(), (*(byte *)(piVar2 + 0x98) & 4) == 0))
    goto LAB_00449769;
    FUN_00425d30();
    param_1[0x164c] = param_1[0x164c] & 0xfffffffe;
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    pcVar11 = s_PUSH_BLOCK_FLIP_00720334;
  }
  else {
    pcVar11 = s_PUSH_BLOCK_INTO_IDLE_007205b4;
    FUN_004258a0(s_PUSH_BLOCK_INTO_IDLE_007205b4);
    iVar4 = FUN_0053cc70(pcVar11);
    if ((*(int *)(iVar3 + 8) != iVar4) ||
       ((param_1[0x14d] < 1 &&
        (local_8c = (float)(param_1[0x14b] + -2),
        (float)(int)local_8c < (float)param_1[0x14c] ==
        ((float)(int)local_8c == (float)param_1[0x14c]))))) goto LAB_00449153;
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    pcVar11 = s_PUSH_BLOCK_IDLE_007205cc;
  }
  uVar12 = 0x3e000000;
  uVar10 = 1;
  uVar9 = 0;
  uVar7 = FUN_0053cc70(pcVar11);
  FUN_00540840(uVar7,uVar9,uVar10,uVar12);
LAB_00449769:
  param_1[0x194] = 0;
  param_1[0x196] = 0;
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  param_1[0x180] = 0;
  param_1[0x185] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  return;
}

