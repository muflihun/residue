
                                       ‫بسم الله الرَّحْمَنِ الرَّحِيمِ

## CLI Commands
When residue server starts it can accept some commands from command-line interface. This document lists these commands.

### `quit`
Quits the server gracefully

### `reload`
Reloads configurations from same file as initially loaded

### `reset`
Resets the server with following things (be careful in doing this as it may affect connected clients)

 1. Reloads configurations
 2. Disconnect all the clients (and remove corresponding tokens)
 3. Disconnect active sessions

### `history`
Display history of valid commands (default maximum = 5)

### `stats`
Displays server stats

### `clients`
Number of connected clients (dead or alive)

##### `list`
Lists all the connected clients (and `DEAD` status if they're dead)

### `tokens`
Lists all the tokens for selected client (and `EXPIRED` status if they're expired).

##### `<client_id>`
The client ID to see tokens for

### `sess`
Number of active sessions

##### `stats`
Displays stats for active sessions (received, sent and how long session has been active for)