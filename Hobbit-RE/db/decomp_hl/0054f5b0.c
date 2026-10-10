
uint __thiscall FUN_0054f5b0(int param_1,undefined4 param_2,float param_3)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int local_8;
  int local_4;
  
  iVar3 = FUN_005c90f0(&local_8,&local_4);
  if (iVar3 != 0) {
    bVar4 = (byte)*(undefined2 *)(param_1 + 0x1e);
    uVar5 = (local_8 << (bVar4 & 0x1f)) + local_4;
    if (uVar5 != 0xffffffff) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8 + ((int)uVar5 >> (bVar4 & 0x1f)) * 0x18) +
              (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc;
      *(int *)(iVar3 + 0x2dc) = iVar3;
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8 +
                      ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
              (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc;
      *(int *)(iVar3 + 0x2e0) = iVar3 + 0x1b0;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2e4 +
       (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = 0;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2e8 +
       (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = 0;
      *(undefined4 *)
       (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2ec +
       (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = param_2;
      *(float *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                         ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2f0 +
                (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = param_3;
      *(float *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                         ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2f4 +
                (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = param_3;
      fVar2 = DAT_006e92e4;
      puVar1 = (undefined1 *)
               (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                        ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2d4 +
               (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc);
      puVar1[3] = 0xff;
      puVar1[2] = 0xff;
      puVar1[1] = 0xff;
      *puVar1 = 0xff;
      puVar1 = (undefined1 *)
               (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                        ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2d8 +
               (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc);
      puVar1[3] = 0xff;
      puVar1[2] = 0xff;
      puVar1[1] = 0xff;
      *puVar1 = 0xff;
      if (fVar2 < param_3) {
        *(undefined1 *)
         (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                  ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2f8 +
         (*(uint *)(param_1 + 0x18) & uVar5) * 0x2fc) = 1;
        return uVar5;
      }
      iVar3 = FUN_00550d20(uVar5);
      *(undefined1 *)(iVar3 + 0x2f8) = 0;
      return uVar5;
    }
  }
  return 0xffffffff;
}

