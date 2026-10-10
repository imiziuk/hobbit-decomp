
int __thiscall FUN_005be370(int *param_1,float param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_e4 [2];
  undefined8 uStack_dc;
  undefined4 auStack_a4 [2];
  undefined8 uStack_9c;
  undefined1 auStack_64 [44];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006df1e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((((*(byte *)(param_1 + 0x10) & 2) == 0) ||
      (ExceptionList = &pvStack_c, iVar1 = (**(code **)(*param_1 + 0x3c))(), iVar1 == 0)) ||
     (iVar1 = 2, (*(uint *)(param_1[2] + 0x130) & 0x1000) != 0)) {
    iVar1 = param_3;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  uVar2 = FUN_005becf0();
  iVar3 = FUN_005af160(uVar2);
  switch(*(undefined2 *)((int)param_1 + 0x42)) {
  case 0:
    if (iVar3 != 0) {
      iVar1 = 1;
      if ((*(byte *)(iVar3 + 0x5c) & 8) != 0) {
        *(undefined4 *)(iVar3 + 100) = 0;
      }
      uVar2 = FUN_005becf0();
      FUN_00649b60(uVar2);
      uStack_4 = 0;
      FUN_005af120();
      uStack_9c = FUN_00425510();
      uStack_4 = 1;
      auStack_a4[0] = 0x10;
      FUN_006499d0();
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_0064a320(auStack_38);
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      uStack_4 = 3;
      FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),auStack_a4)
      ;
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
    }
    goto LAB_005be6b5;
  case 1:
    uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
    uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
    if (iVar3 == 0) goto LAB_005be6b5;
    if ((*(uint *)(param_1[2] + 0x130) & 1) == 0) goto LAB_005be658;
    if (((((*(uint *)(param_1[2] + 0x130) & 4) != 0) ||
         (iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 100) * 4) + 4),
         iVar4 == 0)) || ((*(byte *)(iVar4 + 4) & 2) == 0)) &&
       (iVar4 = *(int *)(iVar3 + 100) + 1, *(int *)(iVar3 + 100) = iVar4,
       *(int *)(iVar3 + 8) <= iVar4)) {
      if ((*(byte *)(iVar3 + 0x5c) & 1) == 0) {
        *(undefined4 *)(iVar3 + 100) = 0;
        uVar2 = FUN_005becf0();
        FUN_00649b60(uVar2);
        uStack_4 = 4;
        FUN_005af120();
        uStack_dc = FUN_00425510();
        uStack_4 = 5;
        auStack_e4[0] = 0xf;
        FUN_006499d0();
        uStack_4 = CONCAT31(uStack_4._1_3_,6);
        FUN_0064a320(auStack_64);
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
        uStack_4 = 7;
        FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),
                     auStack_e4);
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf;
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
      }
      else {
        *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar3 + 0x60);
        iVar1 = 1;
        uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
        uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
      }
      goto LAB_005be6b5;
    }
    goto LAB_005be633;
  case 2:
    iVar3 = param_1[2];
    if (*(float *)(iVar3 + 0xd4) <= DAT_006e92e4) {
      if ((*(byte *)(iVar3 + 0x130) & 1) == 0) {
        iVar1 = 0;
        uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
        uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
        goto LAB_005be6b5;
      }
    }
    else {
      *(float *)(iVar3 + 0xd4) = *(float *)(iVar3 + 0xd4) - param_2;
      if (DAT_006e92e4 < *(float *)(param_1[2] + 0xd4)) {
        iVar1 = ((int)*(char *)(param_1[2] + 0x130) & 1U) << 1;
        uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
        uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
        goto LAB_005be6b5;
      }
    }
    break;
  case 3:
    if ((*(byte *)(param_1[2] + 0x130) & 1) == 0) {
      uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
      uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
      if (iVar1 == 2) goto LAB_005be6b5;
LAB_005be658:
      iVar1 = 0;
      uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
      uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
      goto LAB_005be6b5;
    }
    if (DAT_006e92e4 < *(float *)(param_1[2] + 0xd4)) {
      iVar1 = 2;
      uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
      uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
      goto LAB_005be6b5;
    }
    break;
  case 4:
    if ((*(byte *)(param_1[2] + 0x130) & 1) == 0) {
      iVar1 = 0;
    }
    else if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
      iVar1 = 1;
    }
  default:
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
      uVar2 = 0x3e;
      FUN_005af120(0x3e);
      iVar3 = FUN_004a1250(uVar2);
      if (iVar3 != 0) {
        iVar1 = 4;
      }
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xef;
    uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
    uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
    goto LAB_005be6b5;
  }
  uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
  uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
  if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
LAB_005be633:
    iVar1 = 1;
    uStack_9c = CONCAT44(uStack_9c._4_4_,(undefined4)uStack_9c);
    uStack_dc = CONCAT44(uStack_dc._4_4_,(undefined4)uStack_dc);
  }
LAB_005be6b5:
  if ((*(byte *)(param_1 + 0x10) & 8) == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x44))();
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7;
    if (iVar3 != 0) {
      iVar1 = 3;
    }
  }
  ExceptionList = pvStack_c;
  return iVar1;
}

