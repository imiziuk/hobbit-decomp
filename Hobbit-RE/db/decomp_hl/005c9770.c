
void __thiscall FUN_005c9770(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  undefined1 local_c [12];
  
  FUN_0065fce0(0);
  iVar3 = FUN_00672260(local_c);
  fVar2 = *(float *)(iVar3 + 4) + *(float *)(param_1 + 0x24);
  iVar3 = 0;
  *(float *)(param_1 + 0x1c) = param_2 + *(float *)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar6 + 0x20 + iVar4) = *(undefined4 *)(iVar6 + 0xc + iVar4);
      iVar4 = iVar6 + iVar4;
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar4 + 0x14);
      fVar1 = *(float *)(param_1 + 0x1c) - *(float *)(*(int *)(param_1 + 0x10) + 0x18 + iVar6);
      iVar4 = *(int *)(param_1 + 0x10) + iVar6;
      *(float *)(iVar4 + 0x20) = fVar1 * *(float *)(iVar4 + 0x20);
      *(float *)(iVar4 + 0x24) = fVar1 * *(float *)(iVar4 + 0x24);
      *(float *)(iVar4 + 0x28) = fVar1 * *(float *)(iVar4 + 0x28);
      iVar4 = iVar6 + *(int *)(param_1 + 0x10);
      *(float *)(iVar4 + 0x20) =
           *(float *)(iVar6 + *(int *)(param_1 + 0x10)) + *(float *)(iVar4 + 0x20);
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 4) + *(float *)(iVar4 + 0x24);
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x28);
      fVar1 = *(float *)(iVar6 + 0x24 + *(int *)(param_1 + 0x10));
      if (fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2))) {
        puVar5 = (undefined4 *)FUN_00672260(local_c);
        iVar4 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(iVar4 + iVar6) = *puVar5;
        iVar4 = iVar4 + iVar6;
        *(undefined4 *)(iVar4 + 4) = puVar5[1];
        *(undefined4 *)(iVar4 + 8) = puVar5[2];
        *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x10)) =
             *(float *)(param_1 + 0x20) + *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x10));
        *(undefined4 *)(iVar6 + 0x18 + *(int *)(param_1 + 0x10)) = *(undefined4 *)(param_1 + 0x1c);
        fVar7 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x30),
                                      *(undefined4 *)(param_1 + 0x34));
        iVar4 = *(int *)(param_1 + 0x10);
        *(float *)(iVar6 + 0x10 + iVar4) = (float)-fVar7;
        puVar5 = (undefined4 *)(iVar6 + 0xc + iVar4);
        *puVar5 = 0;
        puVar5[2] = 0;
        fVar7 = (float10)FUN_00647b30(0,0x40c90fdb);
        *(float *)(iVar6 + 0x1c + *(int *)(param_1 + 0x10)) = (float)fVar7;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return;
}

