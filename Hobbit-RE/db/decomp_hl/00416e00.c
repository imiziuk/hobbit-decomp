
void __fastcall FUN_00416e00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (((DAT_0075b7ec != 0) && (*(int *)(param_1 + 0x424) != 0)) && (*(int *)(param_1 + 0x430) != 0))
  {
    iVar1 = FUN_0065f190(s_LaketownGas_0071fac8);
    if (iVar1 != 0) {
      iVar1 = 0;
      uVar3 = extraout_ECX;
      if (0 < *(int *)(param_1 + 0x444)) {
        iVar4 = 0;
        do {
          if (DAT_006e92e4 < *(float *)(*(int *)(param_1 + 0x448) + 0x2c + iVar4)) {
            uVar7 = 1;
            FUN_00406b70(0xffff0000);
            fVar5 = (float10)FUN_00416dc0(0);
            fVar6 = (float)fVar5;
            uVar2 = FUN_00416c80(auStack_18,0);
            FUN_0066a6e0(uVar2,fVar6,uVar3,uVar7);
            uVar7 = 1;
            uVar3 = extraout_ECX_00;
            FUN_00406b70(0xffff0000);
            fVar5 = (float10)FUN_00416dc0(1);
            fVar6 = (float)fVar5;
            uVar2 = FUN_00416c80(auStack_c,1);
            FUN_0066a6e0(uVar2,fVar6,uVar3,uVar7);
            uVar3 = extraout_ECX_01;
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 0x58;
        } while (iVar1 < *(int *)(param_1 + 0x444));
      }
      uVar2 = 1;
      FUN_00406b70(0xffffffff);
      iVar1 = FUN_0041bcc0(uVar3,uVar2);
      FUN_0066a6e0(&DAT_0075b75c,*(undefined4 *)(*(int *)(iVar1 + 0x450) + 0x70));
      uVar2 = 1;
      uVar3 = extraout_ECX_02;
      FUN_00406b70(0xffffffff);
      iVar1 = FUN_0041bcc0(uVar3,uVar2);
      FUN_0066a6e0(&DAT_0075b768,*(undefined4 *)(*(int *)(iVar1 + 0x450) + 0x70));
      FUN_0065f430();
    }
  }
  FUN_00418290();
  return;
}

