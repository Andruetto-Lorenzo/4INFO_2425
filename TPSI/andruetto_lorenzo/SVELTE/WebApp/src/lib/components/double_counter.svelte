<svelte:head>
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@48,400,0,0">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Bungee+Spice&display=swap">
</svelte:head>

<script>
    export let doubleCounter;
</script>

<div class="container">
    <div class="pulsante">
        <button on:click={() => doubleCounter -= 3}>
            <span class="material-symbols-outlined icon">remove</span>
        </button>
    </div>

    <div class="number">
        {doubleCounter}
    </div>

    <div class="pulsante">
        <button on:click={() => doubleCounter += 2}>
            <span class="material-symbols-outlined icon">add</span>
        </button>
    </div>
</div>

<style>
    .container{
        border: 4px solid #D43C2F;
        display: flex;
        justify-content: space-between;
        border-radius: 30px;
        width: 300px;
        padding: 10px;
    }

    .pulsante {
        display: flex;
        align-items: center;
    }

    button {
        border: none;
        background: none;
    }

    .icon{
        font-size: 2.5rem;
        color: #F09C00;
        font-weight: bolder;
    }

    .icon:hover{
        color: #D43C2F;
        cursor: pointer;
    }

    .icon:active{
        text-shadow: 1px 1px 10px #D43C2F;
    }

    .number{
        font-size: 4rem;
        font-family: 'Bungee Spice', cursive;
    }
</style>