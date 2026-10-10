
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056e2b0(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  if ((_DAT_006ee600 < *(float *)(param_1 + 0x488)) &&
     ((NAN(_DAT_0075eba0) || NAN(DAT_006e92e4)) != (_DAT_0075eba0 == DAT_006e92e4))) {
    uVar7 = 0x3eaaaaab;
    iVar5 = param_1;
    FUN_00406b70(0xff000000);
    FUN_004f8520(1,iVar5,uVar7);
  }
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
  pfVar3 = (float *)FUN_0056bcf0(&local_24,piVar2,0);
  pfVar4 = (float *)(**(code **)(*piVar2 + 0x28))();
  fStack_18 = *pfVar4 + *pfVar3;
  fStack_14 = pfVar4[1] + pfVar3[1];
  fStack_10 = pfVar4[2] + pfVar3[2];
  iVar5 = (**(code **)(*piVar2 + 0x30))();
  fStack_28 = *(float *)(iVar5 + 4);
  iVar5 = FUN_0041bcc0();
  if (*(int *)(iVar5 + 0x8d4) != 0x1b) {
    iVar5 = *(int *)(param_1 + 0x730);
    local_24 = *(float *)(iVar5 + 0xa8);
    fStack_20 = *(float *)(iVar5 + 0xac);
    fStack_1c = *(float *)(iVar5 + 0xb0);
    FUN_0064c8e0(fStack_28,&fStack_28,&fStack_2c);
    *(float *)(param_1 + 0x4a8) = fStack_18;
    *(float *)(param_1 + 0x4b0) = fStack_10;
    fVar1 = fStack_2c * local_24 + fStack_1c * fStack_28;
    *(float *)(param_1 + 0x4ac) = fStack_14;
    fStack_1c = (fStack_1c * fStack_2c - local_24 * fStack_28) + fStack_10;
    local_24 = fVar1;
    FUN_00570010(fVar1 + fStack_18,fStack_14 + fStack_20,fStack_1c);
    return;
  }
  if ((*(byte *)(param_1 + 0x484) & 2) != 0) {
    fVar6 = (float10)FUN_0056bb90();
    fStack_28 = (float)fVar6;
    FUN_0064c8e0(fStack_28,&fStack_2c,&fStack_28);
    local_24 = fStack_2c * _DAT_006ebfcc + fStack_28 * DAT_006e92e4 + fStack_18;
    fStack_1c = (fStack_28 * _DAT_006ebfcc - fStack_2c * DAT_006e92e4) + fStack_10;
    iVar5 = FUN_0056bb40(auStack_c);
    uVar7 = *(undefined4 *)(iVar5 + 4);
    *(float *)(param_1 + 0x4ac) = fStack_14;
    *(float *)(param_1 + 0x4a8) = fStack_18;
    *(float *)(param_1 + 0x4b0) = fStack_10;
    FUN_00570010(local_24,uVar7,fStack_1c);
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xffffffbf | 0x10;
  }
  return;
}

