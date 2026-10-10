
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00544600(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d94f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__MixKey_0073802c);
  local_4 = 0;
  if ((*(int *)(param_1 + 8) != -1) &&
     ((NAN(*(float *)(param_1 + 0x18)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x18) == DAT_006e92e4))) {
    iVar7 = param_1 + 4;
    iVar5 = FUN_00549470(iVar7);
    FUN_00549580(iVar7);
    iVar5 = *(int *)(iVar5 + 0x58);
    iVar9 = *(int *)(param_1 + 8) * 0x50;
    puVar12 = &DAT_007698d0;
    iVar11 = param_2;
    fVar10 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                   (float)(*(short *)(iVar9 + 0x24 + iVar5) + -1),param_2,
                                   &DAT_007698d0);
    FUN_0053fa30(*(undefined4 *)(iVar9 + iVar5 + 0x20),(float)fVar10,iVar11,puVar12);
    if (DAT_006e92e4 < *(float *)(param_1 + 0x2c)) {
      FUN_005449e0();
      fVar3 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
      pfVar2 = (float *)(*(int *)(param_1 + 0x28) + param_2 * 0x28);
      pfVar1 = pfVar2 + 3;
      fVar4 = DAT_007698dc * *pfVar1 +
              DAT_007698e0 * pfVar2[4] + DAT_007698e4 * pfVar2[5] + DAT_007698e8 * pfVar2[6];
      if ((_DAT_006e999c < fVar4) || (fVar4 < _DAT_006ef7fc != (NAN(fVar4) || NAN(_DAT_006ef7fc))))
      {
        DAT_007698dc = *pfVar1;
        DAT_007698e0 = pfVar2[4];
        DAT_007698e4 = pfVar2[5];
        DAT_007698e8 = pfVar2[6];
      }
      else {
        FUN_00542ec0(pfVar1,&DAT_007698dc,fVar4,fVar3,&DAT_007698dc);
      }
      FUN_00401f00(_DAT_007698d0 - *pfVar2,_DAT_007698d4 - pfVar2[1],_DAT_007698d8 - pfVar2[2]);
      uVar6 = FUN_0042eea0(local_30,fVar3,local_3c);
      uVar6 = FUN_00402130(local_24,pfVar2,uVar6);
      FUN_004357e0(uVar6);
      uVar6 = FUN_00405080(local_24,&DAT_007698ec,pfVar2 + 7);
      uVar6 = FUN_0042eea0(local_30,fVar3,uVar6);
      uVar6 = FUN_00402130(local_18,pfVar2 + 7,uVar6);
      FUN_004357e0(uVar6);
    }
    iVar5 = FUN_00549470(iVar7);
    FUN_00549580(iVar7);
    iVar7 = FUN_0053f540(*(undefined4 *)
                          (*(int *)(param_1 + 8) * 0x50 + 0x20 + *(int *)(iVar5 + 0x58)));
    if ((*(uint *)(iVar7 + param_2 * 4) & 0x40000) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      pfVar1 = param_3 + 3;
      fVar3 = DAT_007698dc * *pfVar1 +
              DAT_007698e0 * param_3[4] + DAT_007698e4 * param_3[5] + DAT_007698e8 * param_3[6];
      if ((_DAT_006e999c < fVar3) || (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc))))
      {
        *pfVar1 = *pfVar1;
        param_3[4] = param_3[4];
        param_3[5] = param_3[5];
        param_3[6] = param_3[6];
      }
      else {
        FUN_00542ec0(pfVar1,&DAT_007698dc,fVar3,uVar6,pfVar1);
      }
      FUN_00401f00(_DAT_007698d0 - *param_3,_DAT_007698d4 - param_3[1],_DAT_007698d8 - param_3[2]);
      uVar8 = FUN_0042eea0(local_18,uVar6,local_3c);
      uVar8 = FUN_00402130(local_24,param_3,uVar8);
      FUN_004357e0(uVar8);
      uVar8 = FUN_00405080(local_18,&DAT_007698ec,param_3 + 7);
      uVar6 = FUN_0042eea0(local_24,uVar6,uVar8);
      uVar6 = FUN_00402130(local_30,param_3 + 7,uVar6);
      FUN_004357e0(uVar6);
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

