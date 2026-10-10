
void FUN_0069240d(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  param_1[1] = 0;
  uVar1 = FUN_006cb108(param_1);
  puVar2 = (undefined4 *)FUN_00694500(param_1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0069452f(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x35;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  else {
    *puVar2 = FUN_00691aad;
    puVar2[1] = FUN_00691ba9;
    puVar2[2] = FUN_00691c37;
    puVar2[3] = FUN_00691cc9;
    puVar2[4] = FUN_00691d67;
    puVar2[5] = FUN_00691dc8;
    puVar2[6] = FUN_00691e29;
    puVar2[7] = FUN_006920bb;
    puVar2[8] = FUN_006921d9;
    puVar2[9] = FUN_006922fc;
    puVar2[10] = FUN_006923dd;
    puVar2[0xb] = uVar1;
    puVar3 = puVar2 + 0xf;
    iVar4 = 2;
    do {
      puVar3[-2] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0x50;
    param_1[1] = (int)puVar2;
  }
  return;
}

